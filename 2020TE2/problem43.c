#include<stdio.h>

int main(){
  int a,i,j,b;
  scanf("%d", &a);

  for(i = 1; i <= a; i++){
    b = 0;

    for(j = 1; j <= i; j++){
      if(i%j == 0) b++;
    }
  
   if(b == 2) printf("%d ", i);
    

    }
    printf("\n");

    return 0;

  }

