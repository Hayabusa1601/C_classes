#include<stdio.h>
#include<stdlib.h>

void  **dobpoi( int row, int col){
  int i, j;
  int **pp;
  pp =(int **)malloc(sizeof(int *) * col);//ダブルポインタ先に領域を確保

  for(i=0; i<col; i++){
    pp[i] = (int *)malloc(sizeof(int) * row);
    //pp[0]～pp[row-1]のさす先に領域を確保
   }


}


int main(void){
  int *dp = NULL;
  int gyou, retsu;
  printf("行を入力してください："); scanf("%d", &gyou);  
  printf("列を入力してください："); scanf("%d", &retsu);

  int i,j;
  //雑に初期化
  for(i = 0; i < gyou; i++){
    for(j = 0; j < retsu; j++){
      dp[i][j] = i + j;
      }
  }

  //確認
  for(i = 0; i < gyou; i++){
    for(j = 0; j < retsu; j++){
      printf("%d", dp[i][j]);
    }
    prinf("\n");
  }

  for(i = 0; i < retsu; i++) free(dp[i]);

  free(dp);

  return 0;
}


