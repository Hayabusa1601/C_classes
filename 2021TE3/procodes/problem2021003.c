/* 6-3 */
/* ファイル名を指定し、そこから値を代入する。エラーのとき終了*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {
  double a,b,c;
  char fname[20];
  FILE *fp;

  printf("読み込むファイルの名前を入力 ->");
  scanf("%s",fname);
  fp = fopen(fname,"r");//fpをオープン

  if(fp == NULL){
    printf("ファイルを読み込めません\n");
    exit(1);
  }//読みこめない場合終了

  fscanf(fp, "%lf,%lf,%lf", &a, &b, &c);//fpから読み込み
  fclose(fp);//fpをクローズ
  printf("a=%f, b=%f, c=%f\n", a, b, c);
  return 0;
}
