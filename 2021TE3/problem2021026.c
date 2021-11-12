#include<stdio.h>
#include<math.h>
#define E 0.001
#define DX 0.0000762939453125 
#define DY 0.562939453125
double func(double x, double y) {
  return 0.5*pow(x,6) - 0.5*x + 2*pow(y,6);
}

double Xfdash(double x) {
    return (func(x + DX, 0) - func(x - DX, 0)) / (2.0*DX);
}

double Yfdash(double y) {
    return (func(0, y + DY) - func(0, y - DY)) / (2.0 * DY);
}

int main(void) {
  //step1
  double x = 1;
  double y = 1;

  //step2
  double a = 0.0001;
  double nextx;
  double nexty;

  while(fabs(Xfdash(x)) > E || fabs(Yfdash(y)) > E) {
    nextx = x - (a*Xfdash(x));
    nexty = y - (a*Yfdash(y));

    x = nextx;
    y = nexty;
  }

  printf("最低のx = %lf\n", x);
  printf("最低のdx = %lf\n", Xfdash(x));

  printf("最低のy = %lf\n", y);
  printf("最低のdy = %lf\n", Yfdash(y));
  
  printf("f(x,y) = %lf\n", func(x,y));
  return 0;
}

