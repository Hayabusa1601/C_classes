#include<stdio.h>
#define swap(type,a,b) {type z; z = a; a = b; b = z;}


int main(){
  int x=1,y=2;
  double a=1.5,b=2.9;

  printf("int型の問 %d %d\n", x, y);
  printf("double型の問 %lf %lf\n", a, b);
  swap(int,x,y);
  swap(double, a, b);

  printf("int型の答 %d %d\n", x, y);
  printf("double型の答 %lf %lf\n", a,b);
return 0;
}

