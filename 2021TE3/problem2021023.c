#include<stdio.h>
#include<math.h>

double func(double x) {
  return (0.5* pow(x,6) - 0.5 * pow(x,3));
}


double differential (double a) {
 double fa;
 double dx;
 int co;
 for(dx = 1.0, co = 0; dx > pow(10, -100); dx /= 2, co++) {

   fa = ((func(a + dx)) - func(a)) / dx; 
   printf("%d回目\n", co);
   printf("微分係数=%.14lf\n", fa);  
   printf("dx=%.30lf\n", dx);
   
     
 }

 return fa;
}


int main(void) {
  printf("最終=%.14lf", differential(1));
  return 0;  
}

