#include<stdio.h>

//右に回転させる。イメージとしては、
//  x          1111112222
// x>>n        0000111111  a
// x << 32-n   2222000000  b
//aとbこの二つのORをとって、
//rrotate(x,n) 2222111111
unsigned rrotate(unsigned x, unsigned int n){
    return x >> n | x << (32 -n);
}
unsigned lrotate(unsigned x, unsigned int n){
  return  x << n | x >> (32 - n);
}
int main(){
  unsigned x, n;
  printf("x="); scanf("%u", &x);
  printf("n="); scanf("%u", &n);
  unsigned a = rrotate(x, n);
  unsigned b = lrotate(x,n);

  printf("\n前　　= %d", x); 
  printf("\n右回転= %d", rrotate(x,n)); 
  printf("\n左回転= %d", lrotate(x,n));
  putchar('\n');

  return 0;
}

