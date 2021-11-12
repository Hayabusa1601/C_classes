#include<stdio.h>
#include<stdlib.h>

int main(void) {
  double x,y,z;
  char fname[20];
  FILE *fp;
  printf("ファイル名を入力してね-> \n");
  scanf("%s", fname);
  fp = fopen(fname, "r");

  if(fp == NULL){
    puts("ファイルを開けません");
    exit(1);
  }

  fscanf(fp,"%lf %lf %lf", &x, &y, &z);
  fclose(fp);
  printf("%lf %lf %lf", x, y, z);
  putchar('\n');
  return 0;
 }
 

