#include<stdio.h>

int main(){
  int a;
  printf("整数を入力してください:");
  scanf("%d", &a);
  putchar('\n'); 
 char ca = a;
 printf("int型の値: %d\n", a);
 printf("char型の値: %d\n", ca);
 printf("char型の範囲であれば表示されます。\n");

 return 0;
}

