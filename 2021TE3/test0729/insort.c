#include<stdio.h>
#define N 20
#include<stdlib.h>
#include<time.h>

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void insertsort(int *a) {
   int i, j;
   for(i = 0; i < N; i++) {
     j = i;
     while((j > 0) && (a[j - 1] > a[j])) {
      swap(&a[j - 1], &a[j]);

      j--;
     }
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

insertsort(a);

for(i = 0; i < N; i++) {
   printf("%d \n", a[i]);
}

  t_end = clock();
  printf("実行時間: %f\n", (t_end - t_start) / CLOCKS_PER_SEC);
  return 0;
}


