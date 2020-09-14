#include<stdio.h>

int main(){
  int x, y;
  printf("%d\n", -0);
  x=256; y = 128;
  printf("%d\n", x&y);
  printf("%d\n", x|y);
  y = 386;
  printf("%d\n", x^y);
  return 0;
}

