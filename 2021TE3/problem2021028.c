#include<stdio.h>
#include<math.h>
#define E 0.001
#define DX 0.0000762939453125 
#define DY 0.0562939000

double func(double x, double y) {
  return sin(4*x) + pow((x/2),2) + sin(6*y) + pow(y,2) + 1;
}

double Xfdash(double x) {
    return (func(x + DX, 0) - func(x - DX, 0)) / (2.0*DX);
}

double Yfdash(double y) {
    return (func(0, y+DY) - func(0, y-DY)) / (2.0 * DY);
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
     if(func(x1,0) < func(x2,0) && func(x1,0) < func(x3,0)) {
       next = x1;

     } else if (func(x2,0) < func(x1,0) && func(x2,0) < func(x3,0)) {
       next = x2;

     } else if (func(x3,0)< func(x1,0) && func(x3,0) < func(x1,0)) {
       next = x3;
     }
     printf("x1=%lf x2=%lf x3=%lf ", x1,x2,x3);

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
     printf("現在の最低値x = %lf\n", x2);
   }

   return x2;
}

double searchY() {
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
     if(func(0,x1) < func(0,x2) && func(0,x1) < func(0,x3)) {
       next = x1;

     } else if (func(0,x2) < func(0,x1) && func(0,x2) < func(0,x3)) {
       next = x2;

     } else if (func(0,x3) < func(0,x1) && func(0,x3) < func(0,x1)) {
       next = x3;
     }
     printf("y1=%lf y2=%lf y3=%lf ", x1,x2,x3);

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
     printf("現在の最低値y = %lf\n", x2);
   }

   return x2;
}

int main(void) {
  //step1
  double x = searchX();
  double y = searchY();

  //step2
  double a = 0.0001;
  double nextx;
  double nexty;

  while(fabs(Xfdash(x)) > E || fabs(Yfdash(y)) > E) {
    printf("dx = %lf  ", Xfdash(x));
    printf("dy = %lf\n", Yfdash(y));

    nextx = x - (a*Xfdash(x));
    nexty = y - (a*Yfdash(y));

    x = nextx;
    y = nexty;
  }

  printf("最低のx = %lf\n", x);
  printf("最低のdx = %lf\n", Xfdash(x));

  printf("最低のy = %lf\n", y);
  printf("最低のdy = %lf\n", Yfdash(y));
  return 0;
}

