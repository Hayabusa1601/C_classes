#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

int partition (int array[], int left, int right) {
  int i,j,pivot;
  i = left;
  j = right + 1;
  pivot = left;//先頭要素

  do{
    do{ i++; } while (array[i] < array[pivot]);
    do{ j--; } while (array[pivot] < array[j]);
    
    if(i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap( &array[pivot], &array[j]);

  return j;
}


void quickSort(int *a, int l, int r) { 
   int p;

   if(l < r) {
     p = partition (a, l, r);
     quickSort(a,l,p-1);
     quickSort(a,p+1, r);
   }
}

int main(void) {
  clock_t t_start, t_end;
  t_start = clock();//タイム計測の準備
  
  srand((unsigned int)time(NULL));//乱数のタネ

  int i;
  
  int a[N] = { 2, 42, 56,82, 19, 30, 64, 33, 90, 71};
 
  quickSort(a, 0, 9);//quicksort関数に渡してquick sort

  for(i = 0; i < N; i++) {
    printf("%d\n", a[i]);
  }

  t_end = clock();//タイム計測の終了
  printf("実行時間:%f\n",(double)(t_end - t_start)/CLOCKS_PER_SEC);
  return 0;
}
