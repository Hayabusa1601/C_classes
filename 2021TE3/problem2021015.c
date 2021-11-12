#include<stdio.h>
#include<stdlib.h>

int main (void) {
  int *p1, *p2;
  int i, j,co = 0;

  p1 = (int *)malloc(sizeof(int));
  puts("入力終了時はCtrl + d");
  for(i = 0; scanf("%d", p1 + i) != EOF; ) {
      p2 = p1;
      i++;
      p1 = (int *)malloc(sizeof(int) * (i + 1));
     for(j = 0; j <=i; j++) {
       *(p1+j) = *(p2+j);       
     }
     free(p2);
  }

  for(j = 0; j < i; j++) {
    printf("%d ", *(p1 + j));
  }
  putchar('\n');
   
  return 0;
}


