/*
 * problem2021007
 * 構造体オブジェクトのsanakaの各メンバの値を
 * キーボードから読み込むように変更せよ*/

#include<stdio.h>

#define NAME_LEN 64
/*構造体の宣言*/
struct student {
  char  name[NAME_LEN]; //名前
  int   height;         //身長
  float weight;         //体重
  long  schols;         //奨学金
};
typedef struct student Student;//別名を定義


int main(void) {
   Student sanaka;
   scanf("%s", &sanaka.name);
   scanf("%d", &sanaka.height);
   scanf("%f", &sanaka.weight);
   scanf("%ld", &sanaka.schols);

   printf("氏　名 = %s\n",   sanaka.name     );
   printf("身　長 = %d\n",   sanaka.height   );
   printf("体　重 = %.1f\n", sanaka.weight   );
   printf("奨学金 = %ld\n",  sanaka.schols   );
   return 0;
}
