include<stdio.h>
#include<stdlib.h>

typedef struct MEMBERCARD {
  int num;
  char name[20];
  double point;
}mc;

int main (void) {
  mc *p1, *p2;
  int i, j,co = 0;

  p1 = (mc *)malloc(sizeof(mc));
  puts("入力終了時はCtrl + d");
  i = 0;
    while(scanf("%d", &((p1 + i)->num)) != EOF){
        scanf("%s", &((p1 + i)->name));
        scanf("%lf", &((p1 + i)->point));
      p2 = p1;
      i++;
      p1 = (mc *)malloc(sizeof(mc) * (i + 1));
     for(j = 0; j <=i; j++) {
       *(p1+j) = *(p2+j);
     }
     free(p2);
    }


  for(j = 0; j < i; j++) {
    printf("number: %d ",(p1 + j)->num);
    printf("name: %s ",(p1 + j)->name);
    printf("point: %lf ",(p1 + j)->point);
    putchar('\n');
  }
  putchar('\n');

  return 0;
}