#include<stdio.h>
#include<math.h>

#define E 0.0001
#define DX 0.0000762939453125
#define START 1

double func(double x) {
   return sin(10*x) + pow((x/2),2) + 1;
}

double fdash(double x) {
  return (func(x + DX) - func(x - DX)) / (2.0*DX);
}

double searchX() {
   //三つとる初期値のうち中央の値
  double width = 0.300;
  double x2 = -10.000;
  double x1 = x2 - width;
  double x3 = x2 + width;
  int co = 0;
  
  //次の中央の初期値
  double next;
  
  //10回同じだったらそれが最低値
  while(co < 10) {
      
      //最低値をチェック
     if(func(x1) < func(x2) && func(x1) < func(x3)) {
       next = x1;
        
     } else if (func(x2) < func(x1) && func(x2) < func(x3)) {
       next = x2;

     } else if (func(x3) < func(x1) && func(x3) < func(x1)) {
       next = x3;
     }
    // printf("x1=%lf x2=%lf x3=%lf ", x1,x2,x3);
     
     //最低値が同じ場合、少し幅を広げる
     if(next == x2) {
       co++;
       width += 0.10;
     } else {
       co = 0;
     }

     
     //初期値を更新
     x2 = next;
     x1 = x2 - width;
     x3 = x2 + width;
     //printf("現在の最低値 = %lf\n", x2);
   }

   return x2;
}


int main(void) {
  //step1
  double x = searchX();

  //step2
  double a = 0.0001; //重要
  double next;

  while(fabs(fdash(x)) > E) {
   //printf("dx = %lf\n", fdash(x));
   next = x - (a*fdash(x));
   x = next;
   }


  printf("最低のx = %lf\n", x);
  printf("最低のfx = %lf\n", func(x));
  printf("最低のdx = %lf\n", fdash(x));
  return 0;

} 

