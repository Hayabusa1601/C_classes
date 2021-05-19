#include<stdio.h>

int main(void) {
  int n = 100;
  int i, j,co = 0;
  int prime[30] = {};
  
  for(i = 2; i <= n; i++) {
   int flag = 1;
   for(j = 2; j < i; j++) {
     if(i % j == 0) {
       flag = 0;
       break;
     }
  }

  if(flag == 1) {
    prime[co] = i;
    co++;
  }

}

  for(i = 0; i < (sizeof(prime)/sizeof(int)); i++) {
    if(prime[i] != 0){
    printf("%d\n", prime[i]);
  }
  }

  return 0;


}
