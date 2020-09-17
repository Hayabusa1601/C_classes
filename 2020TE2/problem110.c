#include<stdio.h>

//十進数を二進数に変換して表示
void print_bits(unsigned x){
  int i;
  for(i = int_bits()-1; i >= 0; i--){
    putchar(((x >> i) & 1U) ? '1' : '0');
  }
}
//右に回転させる。イメージとしては、
//  x          1111112222
// x>>n        0000111111  a
// x << 32-n   2222000000  b
//aとbこの二つのORをとって、
//rrotate(x,n) 2222111111
unsigned rrotate(unsigned x, int n){
    return x >> n | x << (32 -n);
}
unsigned lrotate(unsigned x, int n){
  return  x << n | x >> (32 - n);
}
int main(){
  unsigned x, n;
  printf("x="); scanf("%u", &x);
  printf("n="); scanf("%u", &n);
  unsigned a = rrotate(x, n);
  unsigned b = lrotate(x,n);

  printf("\n前　　= "); print_bits(x);
  printf("\n右回転= "); print_bits(rrotate(x,n));
  printf("\n左回転= "); print_bits(lrotate(x,n));
  putchar('\n');

  return 0;
}

