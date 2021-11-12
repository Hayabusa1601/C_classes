#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<omp.h>


#define X 4 //シェルソートの分割間隔
#define N 20000

void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

/*バブルソート*/
/*void bsort(int *a) {
   int i,j;
   for(i = 0; i < N - 1; i++) {
     for(j = 0; j < N - i - 1; j++) {
       if(a[j] > a[j+1]) {
         swap(&a[j], &a[j + 1]);
     }
}
}
}
*/

/*挿入ソート*/
/*void insort(int *a) {
  int i,j;

  for(i = 1; i < N; i++) {
      j = i;//交換要素を探すインデックスj

      //整列済みの場合処理しない
      while((j > 0) && (a[j - 1] > a[j])) {
        swap(&a[j - 1], &a[j]);//整列されていなければ隣り合う要素を交換

        //隣り合う要素のインデックスを更新
        j--;

   }
  }
}
*/

void shellsort(int *a) {
  int i,j;//counter
  int x = X; //値を操作し徐々に狭めていくため変数に代入

#pragma omp parallel for
 
  for(; x >= 2; x /= 2) { //間隔が1になるまで繰り返す

    /*間隔ごとに挿入ソート*/

     /*Xの値ずつずらして走査すればよいので、上記の挿入ソートの
     *1の部分をxに変えxを間隔の値（1だと隣り合う値）とし、
     *xずつインデックスを更新していけばよい。*/
      
      for(i = x; i < N; i++) {
         j = i;
        
        while((j > x) && (a[j - x] > a[j])) {
          swap(&a[j - x], &a[j]);
          j -= x;
        }
      }
   }

      x /= 2;
#pragma omp single
      for(i = x; i < N; i++) {
         j = i;
        
        while((j > x) && (a[j - x] > a[j])) {
          swap(&a[j - x], &a[j]);
          j -= x;
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
 
  shellsort(a);//insort関数に渡してinsert sort

  for(i = 0; i < N; i++) {
    printf("%d\n", a[i]);
  }

  t_end = clock();//タイム計測の終了
  printf("実行時間:%f\n",(double)(t_end - t_start)/CLOCKS_PER_SEC);
  return 0;
}
