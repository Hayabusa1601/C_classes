#include<stdio.h>
#include<stdlib.h>//malloc用

typedef struct myst {
  int num;
  double stre;
  struct myst *next;
}Myst;


/*プロトタイプ宣言*/
void show_data(Myst* p);
Myst* add_data(int a);


int main(void) {
  int a;
  printf("データの数は？："); scanf("%d", &a); 
  Myst *myp = add_data(a);
  
  show_data(myp);
     
  return 0;
}

void show_data(Myst *p) {
  while (p != NULL) {
    printf("%3d, %lf\n", p->num, p->stre);
    p = p->next;
 }
}

/*headに先頭アドレス、aはデータの数を表す*/
Myst* add_data(int a) {
   Myst *head;
   Myst *p;
   int i;  
    
   //先頭アドレスにはまだ何も入っていいないのでNULL
   head = NULL;
   
   //最初のデータを追加
   head = (Myst *)malloc(sizeof(Myst));
   printf("代入したい数(整数)："); scanf("%d", &head->num); putchar('\n');
   printf("代入したい数(浮動小数点数)："); scanf("%lf", &head->stre); putchar('\n');
   
   //これを最後として、後ろではなく前に前にとデータを増やしていくので次はない(NULL)
   head->next = NULL;
   
   //データを実際に前に前に追加していく
   for(i = 0; i < (a - 1); i++) {
      p = head;
      head = (Myst *)malloc(sizeof(Myst));
      printf("代入したい数(整数)："); scanf("%d", &head->num);
      printf("代入したい数(浮動小数点数)："); scanf("%lf", &head->stre);

      head->next = p;

   }
   //先頭アドレスを返す
   return head;
}


