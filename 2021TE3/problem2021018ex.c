#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

typedef struct xyz {
  int x;
  long y;
  double z;
  struct xyz *next;
  struct xyz *prev;
}Xyz;


/*
void swap (int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}
*/

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

/*自己参照構造体の挿入ソート*/
void strinsort(Xyz *p) {
   int i,j;
   Xyz *stri;
   Xyz *strj;
   Xyz *next;
   
   while(p != NULL) {
     next = p->next;
     

int main(void) {
  int i, j;
  clock_t t_start, t_end;
  t_start = clock();//タイム計測の準備
  
  srand((unsigned int)time(NULL));//乱数のタネ
  
  Xyz *head;
  Xyz *p;
  Xyz *tmp;
  head = NULL;

  head = (Xyz *)malloc(sizeof(Xyz));
  //乱数を代入
  head->x = rand();
  head->y = rand();
  head->z = rand();

  head->next = NULL;


  for(i = 0; i < N; i++) {   
  p = head;
  head = (Xyz *)malloc(sizeof(Xyz));
  //乱数を代入
  head->x = rand();
  head->y = rand();
  head->z = rand();

  p->prev = head;
  head->next = p;
  Xyz *hoge = head->next;
  printf("x=%d\n",hoge->x);
}
   

  //strinsort(p);//strinsort関数に渡して自己参照構造体のinsert sort
  //
  while(p != NULL) {
    printf("x=%3d, y=%ld, z=%lf",p->x, p->y, p->z);
    p = p->next;
    putchar('\n');
    
   /* printf("now=%p, back=%p, next=%p",*p, p->prev, p->next);
    p = p->next;
    putchar('\n');
    */
  }


  t_end = clock();//タイム計測の終了
  printf("実行時間:%f\n",(double)(t_end - t_start)/CLOCKS_PER_SEC);
  return 0;
}
