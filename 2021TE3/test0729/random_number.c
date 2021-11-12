#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void) {
  int i;
  clock_t t_start, t_end;
   t_start = clock();

  srand((unsigned int)time(NULL));
  for(i = 0; i < 10; i++) {
    printf("%d", rand());
  }
 
 t_end = clock();

 printf("実行時間:%f\n", (double)(t_end - t_start) / CLOCK_PER_SEC);


  return 0;


}

