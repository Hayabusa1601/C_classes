#include<stdio.h>

int max2(int a, int b){
  if(a > b){
    return a;//returnでmax2に返す
    }else{
      return b;//同上

    }

}

int main(void){
  int n1, n2;
  puts("二つの整数を入力して下さい");
  printf("整数1:"); scanf("%d", &n1);

  printf("整数２:"); scanf("%d", &n2);

  printf("大きいほうの値は%dです\n", max2(n1,n2));//max2にそれぞれ受け渡している(n1 = a とn2 = b)

  return 0;
}

