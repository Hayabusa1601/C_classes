#include<stdio.h>

int main(void) {
  double x = 12.3, y = 45.6, z=78.9;
  FILE *fp;
  fp = fopen("test1.dat","w");
  fprintf(fp, "%lf %lf %lf", x, y, z);
  printf("%lf %lf %lf\n", x,y,z);
  fclose(fp);
  return 0;
}

