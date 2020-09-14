#include<stdio.h>

void sankaku(char x, int m){
   while(m-- > 0){
     putchar(x);
   }

}

void roop(int t){
  int i;
  for(i=1; i <= t; ++i){
    sankaku(' ', t-i);
    sankaku('*', i);
    putchar('\n');
  }
}

int main(){
  int i, a;
  printf("短辺:");
  scanf("%d", &a);

  roop(a);

  return 0;
}


