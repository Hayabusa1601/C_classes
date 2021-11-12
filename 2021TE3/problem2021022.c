#include<stdio.h>
#define E 0.01
#define ABS(a,b) ((a)>(b))? (a)-(b) : (b)-(a)
#define SQ(a) ((a)*(a))
#define PRIME 0
#define IMAX 1000
const double v = 27.78;

inline int getfugou(double x) {
   return (x >= PRIME)? 1:-1;
}

double func(double x) {
  return ((v * 0.75) + (SQ(v) / (2 * x * 9.8)) - 100);
  
  }


double binarySearch() {
 //step1
  double a = 0;
  double b = 10;
  
 //step2
 int i = 0;
  for (i = 0; i <= IMAX; i++) {

   if((func(a) * func(b)) < 0) {
      break;
       
    } else if(func(a) * func(b) >= 0){
      a -= 0.001;
      b += 0.001;
     

    }
 }

   if(i == IMAX) {
      puts("範囲エラー");
      return 0;           
   }

 //step3
 while(ABS(a,b) > E) {
   if(getfugou(func(a)) == getfugou(func((b + a)/2))) { 
      a = (b+a) / 2;
   } else if(getfugou(func(b)) == getfugou(func((b + a)/2))) { 
      b = (b+a) / 2;
   }
 }
 

   return b;
}


int main() {  
   double tmp = 2;       
   printf("%lf\n", binarySearch());    
   return 0;
}

