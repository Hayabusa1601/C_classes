#include<stdio.h>

int main(){
   int array[10],i,j;

  for(j = 1, i = 0; i < 10; i+=2,j++){
    array[i] = j;
  }


  double a[10],b[10];
  for(i = 0; i<10;i++){
    b[i] = a[10-i-1];
  }

  for(i = 0; i<10/2; i++){
    int tmp = a[i];
    a[i] = a[10-i-1];
   a[10-i-1] = tmp;
  }

  return 0;
}
