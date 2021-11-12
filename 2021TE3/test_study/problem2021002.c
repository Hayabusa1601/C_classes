#include<stdio.h>

int main(void) {
  double x,y,z;
  FILE *fp;
  fp = fopen("test1.dat", "r");
  fscanf(fp,"%lf %lf %lf", &x,&y,&z);
  printf("%lf %lf %lf", x, y, z);
  fclose(fp);
  return 0;

}

