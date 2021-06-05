
/* 6-1 */
/* プログラム中の変数の値をディスクに書き込む*/

#include<stdio.h>
int main(void) {
  double x=12.3, y=45.6, z=78.9;

  FILE *fp;
  fp = fopen("test01.dat","w");

  fprintf(fp, "%f,%f,%f\n", x,y,z);
  printf("%f,%f,%f\n", x, y, z);

  
  fclose(fp);
  return 0;
}

