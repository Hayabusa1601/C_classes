#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20000

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

/*バブルソート*/
void bsort(int *a) {
   int i,j;
   for(i = 0; i < N - 1; i++) {
     for(j = 0; j < N - i - 1; j++) {
       if(a[j] > a[j+1]) {
         swap(&a[j], &a[j + 1]);
     }
}
}
}


int main(void) {
  clock_t t_start, t_end;
  t_start = clock();//タイム計測の準備
  
  srand((unsigned int)time(NULL));//乱数のタネ
  
  int a[N];
  int i;

  for(i = 0; i < N; i++) {
    a[i] = rand();
  }//乱数を代入
 
  bsort(a);//bsort関数に渡してbubble sort

  for(i = 0; i < N; i++) {
    printf("%d\n", a[i]);
  }

  t_end = clock();//タイム計測の終了
  printf("実行時間:%f\n",(double)(t_end - t_start)/CLOCKS_PER_SEC);
  return 0;
}

