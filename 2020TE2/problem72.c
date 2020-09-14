#include<stdio.h>

int main(){
  int i,j,k;
  int t1[4][4] = {};
  int t2[4][4] = {};
  int seki[4][4];
   puts("一つ目の行列を入力してください");
  for(i = 0; i < 4; ++i){
    for(j = 0; j < 3; ++j){
      scanf("%d", &t1[i][j]);
    }
  }

  puts("二つ目の行列を入力してください");
  for(i = 0; i < 3; ++i){
    for(j = 0; j < 4; ++j){
      scanf("%d", &t2[i][j]);
    }
  }

  for(i = 0; i < 4; ++i){
    for(j = 0; j < 4; ++j){
         seki[i][j] = 0;
         for(k=0; k < 3; k++){
             seki[i][j] += t1[i][k] * t2[k][j];
    }}
  }

  // 出力
  puts("答え");
  for(i = 0; i < 4; ++i){
    for(j = 0; j < 4; ++j){
      printf(" %4d ", seki[i][j]);
    }
    putchar('\n');
  }

  return 0;
}




