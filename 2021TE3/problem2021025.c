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
  double x = 1;

  //step2
  double a = 0.0001; //重要
  double next;

  while(fabs(fdash(x)) > E) {
   printf("dx = %lf ", fdash(x));
   next = x - (a*fdash(x));
   x = next;
   }


  printf("最低のx = %lf\n", x);
  printf("最低のdx = %lf\n", func(x)); 
  printf("最低のdx = %lf\n", fdash(x));
  return 0;

} 

