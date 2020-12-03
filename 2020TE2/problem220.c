#include<stdlib.h>
#include<stdio.h>

#define N 5
int main(void){
  int *ip;
  int i;

  ip = (int *)malloc(sizeof(int) * N);
  if(ip == NULL){
    puts("領域が確保できません");
    exit(1);
  }

  for(i = 0; i<N; i++){
    ip[i] = i;
  }

  for(i = 0; i<N; i++){
    printf("%d\n", ip[i]);
  }

  free (ip);

  return 0;

}

  
