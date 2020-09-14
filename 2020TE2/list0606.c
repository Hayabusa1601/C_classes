#include<stdio.h>

double power(double, int);

int main(void){
  double a;
  int b;

  printf("aのb乗を求めます。\n");
  printf("実数a:"); scanf("%lf", &a);
  printf("整数b:"); scanf("%d", &b);

  printf("%.2fの%d乗は%.2fです\n", a, b, power(a,b));

  return 0;
}

double power(double x, int n){
   double tmp = 1.0;
   
   while(n-- > 0) tmp *= x;
   
   return tmp;
}

