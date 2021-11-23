#include<stdio.h>
#include<math.h>
#define DX 0.000007629394531250000000000000
double func(double x) {
  return ((3 * pow(x,5)) - (1.5 * pow(x,2)));
}


double integrate(double a, double b) {
  double ans = 0;

  double x = a + DX;

  while(a <= x && x+DX <= b) {
    ans += ((func(x) + func(x+DX))* DX) / 2;  
    x = x + DX;
  }
  return ans;
}

int main() {
   double a = 0;
   double b = 1;
   printf("%.20lf\n", integrate(a,b));
   return 0;
}


