#include<stdio.h>
#include<math.h>

#define E 0.0001
#define DX 0.0000762939453125
#define START 1

double func(double x) {
   return 2*pow(x,6) - 5*x + 5;
}

double fdash(double x) {
  return (func(x + DX) - func(x - DX)) / (2.0*DX);
}

int main(void) {
  //step1
  double x = 3;
  double a = 0.0001;
  double next;

  while(fdash(x) > E) {
    next = x - a*fdash(x);
    x = next;
  }
  //step2


  printf("最低のx = %lf\n", x);
  printf("最低のdx = %lf\n", func(x)); 
  printf("最低のdx = %lf\n", fdash(x));
  return 0;

} 

