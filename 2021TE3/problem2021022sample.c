#include<stdio.h>
#define E 0.01
#define ABS(a,b) ((a)>(b))? (a)-(b) : (b)-(a)
#define PRIME 0

inline int getfugou(double x) {
   return (x >= PRIME)? 1:-1;
}

double func(double x) {
  return (x - 3);
}

double binarySearch() {
 //step1
  double a = -100;
  double b = 100;
  
 //step2
  while(1) {
   if(func(a) * func(b) < PRIME) {
      break;
       
    } else {
      a -= 10;
      b += 10;

    }
 }

 //step3
 while(ABS(a,b) > E) {
   if(getfugou(func(a)) == getfugou(func((b + a)/2))) { 
      a = (b+a) / 2;
   } else if(getfugou(func(b)) == getfugou(func((b + a)/2))) { 
      b = (b+a) / 2;
   }
 }

   return a;
}





int main() {  

   printf("%lf\n", binarySearch());  
  
   return 0;
}

