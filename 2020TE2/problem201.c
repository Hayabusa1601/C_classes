#include<stdio.h>
#define diff(x,y) ((x)>(y) ? (x)-(y) : (y)-(x))

int main(){
  int a = diff(5,10);
  printf("%d\n", a);
  return 0;
}


