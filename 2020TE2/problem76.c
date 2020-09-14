#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 50000

int main(){
  int array[N];
  int i;

  srand((unsigned)time(NULL));
  for(i=0; i<N; i++){
    array[i] = rand();
  }

  int j;
  for(i=0; i<N; ++i){
    for(j=i+1;j<N; ++j){
      if(array[i] < array[j]){
        int  t = array[i];
        array[i] = array[j];
        array[j] = t;
        }
    }
  }

  for(i=0; i < N; i++){
    printf("%5d\n", array[i]);
  }
  putchar('\n');


  return 0;
}


