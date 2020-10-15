#include<stdio.h>


int factorial(int n){
  if(n > 0){
     return (n * factorial(n-1));
     } else{
     return 1;
     }
}

int main(){
  long a;
  scanf("%d", &a);
  printf("%dの階乗は%dです。", a, factorial(a));
   return 0;
}

