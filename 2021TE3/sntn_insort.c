#include<stdio.h>

void shift_r(int *a, int n) {
   int i;
   for(i = n - 1; i > 0; i--) {
     a[i] = a[i - 1];

   }

  }

void rotation_r(int a[], int n) {
  int i,tmp;
  tmp = a[n - 1];
  
  shift_r(a,n);
  a[0] = tmp;

}

void insert_sort(int a[], int n) {
  int i,j;

  for(i = 0; i < n; i++) {

    for(j = i - 1; j >= 0; j--) {
      if(a[j] <= a[i]) {
        rotation_r(&a[j+1], i - j);
        break;  
      }

      if(a[j] == 0) {
        rotation_r(&a[0], i+1);
      }
    }
  }
}

int main(void) {
  int n = 6, i;
  int a[n];

  for(i = 0; i < n; i++) {
    printf("数字を入力:"); scanf("%d", &a[i]);
    putchar('\n');
 }
  
  insert_sort(a,n);

  
  for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }
    return 0;

}






