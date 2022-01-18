#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int diffNum(int ans, int* hyou) {
   int i, j, tmp=0;
   
   //ansの行と列を取得
   for(i = 0; i < 7; i++) {
     for(j = 0; j < 7; j++) {
       if(hyou[0][i][j] == ans) {
         break;
         tmp=1;
       }
     }
     if(tmp=1) break;
   }

   /*正解・間違い・惜しいを判定　正解→１を返す　不正解→２を返す*/
   //正解
   //
   if(hyou[1][i][j] == 1) {
      printf("正解！");
      return 1;
   } else {
   
   }
}


int getNum(int i, int j) {
  int x;

  printf("数値を入力してください。");
  scanf("%d", &x);

    if(i < x &&& x < j) {
      break;
    } else {
      printf("値が不正です。");
    }
    return x;
 }




int main(void) {
  int hyou[2][7][7] = {0};
  int i, j, k = 1, ans;
  int l, m;
  srand((unsigned)time(null));


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
   

   int flag = 0;
   
   while(flag == 0){
   //入力動作
   int ans = getNum(1, 49);

   //比較動作
   diffNum(ans, hyou);
  
   
    
   return 0;

}




