#include<stdio.h>

int main(){
  int a,b,i;
  scanf("%d %d", &a, &b);
  if(b > a){
   int c = a;
   a = b;
   b = c;
  }
  int count= 0;
  for(i = b; i <= a; i++){
   count += i;
  }
  
  printf("%d\n", count);
  return 0;















}
