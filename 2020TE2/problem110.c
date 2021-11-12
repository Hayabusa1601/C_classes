#include<stdio.h>

int count_bits(unsigned x){
  int bits = 0;
  while(x){
    if(x & 1U) bits++;
    x >>= 1;
  }
  return bits;
}


int int_bits(void){
  return count_bits(~0U);
}

//十進数を二進数に変換して表示
void print_bits(unsigned x){
  int i;
    for(i = int_bits()-1; i >= 0; i--){
        putchar(((x >> i) & 1U) ? '1' : '0');
          }
          }
          
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

