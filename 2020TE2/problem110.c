#include<stdio.h>

unsigned rrotate(unsigned x, int n){
  unsigned a = x >> n;
  return a;
}
unsigned lrotate(unsigned x, int n){
  unsigned b = x << n;
  return b;
}
int main(){
  unsigned x, n;
  printf("x="); scanf("%u", &x);
  printf("n="); scanf("%u", &n);
  unsigned a = rrotate(x, n);
  unsigned b = lrotate(x,n);

  printf("%d %d", a,b);
  return 0;
}

