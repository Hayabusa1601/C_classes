#include<stdio.h>

void sortArr (int *arr, int n);


int main(void) {
  int n,i;
  printf("要素数を入力:"); scanf("%d",&n);
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  sortArr(a, sizeof(a) / sizeof(a[0]));

  for(i = 0; i < n; i++)   printf("%d\n", a[i]);

  return 0;

}


void sortArr(int *arr, int n) {
  int i,j,k;

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(arr[i] > arr[j]) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}




