/* 6-2 */
/* ディスク上のファイルから変数に値を入力する */


#include<stdio.h>
int main(void) {
  double a,b,c;
  FILE *fp;
  fp = fopen("test01.dat","r");
  fscanf(fp,"%lf,%lf,%lf",&a,&b,&c);
  fclose(fp);
  printf("a=%f, b=%f, c=%f\n",a,b,c);
  return 0;
}

