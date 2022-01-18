#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getNum(int i, int j) {
  int x;

  printf("数値を入力してください。:");
  while (1) {
    scanf("%d", &x);
    
    if(i < x && x < j) {
      break;
    } else {
      printf("値が不正です。再入力:");
    }
  }
    return x;
 }




int main(void) {
  int hyou[2][7][7] = {0};
  int i, j, k = 1, ans;
  int l, m, tmp;
  srand((unsigned)time(NULL));

  //表の作成
  for(i = 0; i < 7; i++) {
     for(j = 0; j < 7; j++) {
      hyou[0][i][j] = k++; 
     }
   }

   //正解にフラグを立てる
   l = rand() % 7;
   m = rand() % 7;
   hyou[1][l][m] = 1;
   //デバッグ
   printf("デバッグ答え：%d\n", hyou[0][l][m]);

  
   while(1) {
     /*行列の定義*/
     int row, column;

     /*入力動作*/
     int ans = getNum(1, 49);
    
     /*比較動作*/
     for (i = 0; i < 7; i++) {
       for (j = 0; j < 7; j++) {
         //入力されたansの行と列を取得
         if (hyou[0][i][j] == ans) {
           
           row = i;
           column = j;
           puts("ansの行と列を取得しました");
         
         }
       }
     }
   
     //数値チェック
     if (row == l && column == m) {
       puts("正解!");
       break;
     } else if ( row == l || column == m) {
       puts("惜しい！");
     
     } else {
       puts("不正解！");
     }

  } 
   
   return 0;

}




