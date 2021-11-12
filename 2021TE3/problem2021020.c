#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

/*
void shellsort(int *a) {
  int i,j;//counter
  int x = X; //値を操作し徐々に狭めていくため変数に代入

  while(x >= 1) { //間隔が1になるまで繰り返す

    間隔ごとに挿入ソート

     *Xの値ずつずらして走査すればよいので、上記の挿入ソートの
     *1の部分をxに変えxを間隔の値（1だと隣り合う値）とし、
     *xずつインデックスを更新していけばよい。
      
      for(i = x; i < N; i++) {
         j = i;
        
        while((j > x) && (a[j - x] > a[j])) {
          swap(&a[j - x], &a[j]);
          j -= x;
        }
      }
      x /= 2;//間隔を徐々に狭めていく;
    }
  }

*/

void radixSort(int *a) {
 int h,i,j;
 int ka[N];

 int x = 1;

 for(h = 0; h < 2; h++) {
 
 //printf("%d回目のソート前のka", h+1);
   for(i = 0; i < N; i++) {
      ka[i] =(a[i] / x) % 10;
      //printf("%d ", ka[i]);
}

 for(i = 1; i < N; i++) {
  j = i;
 
   while((j > 0) && (ka[j - 1] > ka[j])) {
    swap(&a[j - 1], &a[j]);
    swap(&ka[j - 1], &ka[j]);
    j--;
 
  }
}
 x *= 10;

}

}


int main(void) {
  clock_t t_start, t_end;
  t_start = clock();//タイム計測の準備
  
  srand((unsigned int)time(NULL));//乱数のタネ
  
  int a[N];
  int i;

  for(i = 0; i < N; i++) {
    a[i] = rand() % 100;
  }//乱数を代入
 
  radixSort(a);//insort関数に渡してinsert sort

  for(i = 0; i < N; i++) {
    printf("%d\n", a[i]);
  }

  t_end = clock();//タイム計測の終了
  printf("実行時間:%f\n",(double)(t_end - t_start)/CLOCKS_PER_SEC);
  return 0;
}
