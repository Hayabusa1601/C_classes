#include<stdio.h>

int max2(int a, int b){
  if(a > b){
    return a;
    }else{
      return b;

    }

}

int main(void){
  int n1, n2;
  puts("二つの整数を入力して下さい");
  printf("整数1:"); scanf("%d", &n1);

  printf("整数２:"); scanf("%d", &n2);

  printf("大きいほうの値は%dです\n", max2(n1,n2));

  return 0;
}

