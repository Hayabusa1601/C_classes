#include<stdio.h>

void set_idx(int *v, int n){
   int i;
   for(i = 0; i < n; i++){
     v[i] = i; 
}
}
int main(void){
  int i,n;
  printf("要素数を入力:"); scanf("%d", &n);
  int a[n];

  set_idx(a,n);

  for(i = 0; i < n; i++){
     printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}

