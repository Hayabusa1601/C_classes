#include<stdio.h>

int factorial(int n){
  int i;
  int c= 1;//ここに答えをかけ合わせていく
  for(i = n; i >= 1; i--){
     c *= i;
  }
  return c;
}

int main(){
  int a;
  printf("整数を入力してください:");
  scanf("%d", &a);
  printf("%dの階乗は%dです。",a, factorial(a));
  return 0;
}

