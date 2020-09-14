#include<stdio.h>

void sankaku(char x, int m){
   while(m-- > 0){
     putchar(x);
   }

}

int main(){
  int i, a;
  printf("短辺:");
  scanf("%d", &a);

  for(i = 1; i <= a; ++i){
    sankaku(' ', a-i);
    sankaku('*', i);
    printf("\n");
  }

  return 0;
}


