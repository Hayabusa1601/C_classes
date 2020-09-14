#include<stdio.h>

int sumup(int n){
  int i, g = 0;
  for(i = 1; i <= n; i++){
   g += i;
  }

   return g;
}

int main(){
  int a;
  scanf("%d", &a);

  printf("%d\n",sumup(a));

  return 0;
}




