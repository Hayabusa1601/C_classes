#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checkNum(int row, int column, int l, int m);

//それぞれ、ans = 答えの数値, hyou = 表の配列, l,m = 答えの数値の行,列 
int diffNum(int ans, int hyou[][7][7], int l, int m) {
  int i,j, row, column;

  for (i = 0; i < 7; i++) {
    for (j = 0; j < 7; j++) {
      //入力されたansの行と列を取得
      if (hyou[0][i][j] == ans) {
        
        row = i;
        column = j;
      
      }
    }
  }
  
  //数値チェック
  return checkNum(row, column, l, m);

}



int checkNum(int row, int column, int l, int m) {

  int flag = 2;
  //数値チェック
  if (row == l && column == m) {
    puts("正解!");
    flag = 1;//true;
  
    //行か列が等しい
  } else if ( row == l || column == m) {
    puts("惜しい！");

    //ななめその１
  } else if ( row == l+1 && column == m+1 ) {
    puts("惜しい！");
  
     //ななめその２
  } else if ( row == l-1 && column == m-1 ) {
    puts("惜しい！");

    //ななめその３
  } else if ( row == l+1 && column == m-1 ) {
    puts("惜しい！");
    
    //ななめその４
  } else if ( row == l-1 && column == m+1 ) {
    puts("惜しい！");

    //不正解
  } else {
    puts("不正解！");
  }

  //不正解なら2を、正解なら1を帰す。
  return flag;

}



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
   //printf("デバッグ答え：%d\n", hyou[0][l][m]);

  
   while(1) {
     /*行列の定義*/
     int row, column;

     /*表の表示*/
     for(i = 0; i < 7; i++) {
       for(j = 0; j < 7; j++) {
         tmp = hyou[0][i][j];

        //一桁のときだけ空白を挿入
        if(tmp < 10) {
         printf("%d  ", tmp);
        } else {
          printf("%d ", tmp);
        }
      }
      putchar('\n');
     }


     /*入力動作*/
     int ans = getNum(0, 50);

     /*比較動作*/
     int flag = diffNum(ans, hyou, l, m);

     //2をfalse、1をtrueと置く。
     if (flag == 2) continue;
      else if (flag == 1) break;

  } 
   
   return 0;

}




