#include<stdio.h>
#define N 20
#define X 4
#include<stdlib.h>
#include<time.h>

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void shellsort(int *a) {
   int i, j;
   int x = X;

   while(x >= 1) {
      
   for(i = x; i < N; i++) {
     j = i;
     
     while((j > x) && (a[j - x] > a[j])) {
      swap(&a[j - x], &a[j]);

      j -= x;
     }
   }
      x /= 2;

   }
}

int main(void) {
  int i;
  clock_t t_start, t_end;
  srand((unsigned int)time(NULL));

  t_start = clock();
  int a[N];
  for(i = 0; i < N; i++) {
    a[i] = rand() % 100;
  }

   shellsort(a);

for(i = 0; i < N; i++) {
   printf("%d \n", a[i]);
}

  t_end = clock();
  printf("実行時間: %f\n", (t_end - t_start) / CLOCKS_PER_SEC);
  return 0;
}


