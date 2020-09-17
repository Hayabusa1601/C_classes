#include<stdio.h>

int count_bits(unsigned x){
  int co = 0;
  while(x){
      if(x & 10){
        co++;
      }
      x >>= 1;
  }
  return co;
}

int int_bits (void){
  return (count_bits(~0U));
}
void print_bits(unsigned x){
  int i;
  for(i = int_bits()-1; i >= 0; i--){
    putchar(((x >> i) & 1U) ? '1' : '0');
  }
}
unsigned rrotate(unsigned x, int n){
  int bt= int_bits();
    n%= bt;
    return (n? (x >> n) | (x << (bt-n)) : x);
}
unsigned lrotate(unsigned x, int n){
  int bt= int_bits();
  n%=bt;
  return (n? (x<<n) | (x << (bt-n)):x);
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


  return 0;
}

