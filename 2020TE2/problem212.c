#include<stdio.h>

void adjust_point(int *n){
  if(*n < 0) *n = 0;
  if(*n > 100) *n = 100;    

}

int main(){
  int n;
  scanf("%d",&n);
  putchar('\n');
  printf("入力された値は%dです\n", n);
  adjust_point(&n);
  printf("変更された値は%dです\n", n);

  return 0;
}



