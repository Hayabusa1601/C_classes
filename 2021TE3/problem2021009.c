#include<stdio.h>
#include<string.h>
#define NUMBER 5 // 学生の人数
#define NAME_LEN 64 //名前の文字数

/* 学生を表す構造体 */
typedef struct {
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
} Student;

Student check_std(Student st); //プロトタイプ宣言

int main(void) {
/*変数の宣言*/
  int i;
  Student std[] = {
    {"Sato", 178, 200, 80000},
    {"Sanaka", 175, 62.5, 73000},
    {"Takao", 173, 86.2, 0},
    {"Mike",165, 72.3, 70000},
    {"Masaki", 179, 77.5, 70000},
  };
/*check関数に通す*/
  for (i = 0; i < NUMBER; ++i) {
    std[i] = check_std(std[i]);
  }
/*結果を表示*/
  for (i = 0; i < NUMBER; ++i) {
  printf("名前：%s, 身長:%d, 体重:%f, 奨学金: %ld", std[i].name, std[i].height, std[i].weight, std[i].schols);
  putchar('\n');
}


  return 0;
}

Student check_std(Student st) {
   int b = 1;
   int namesize = strlen(st.name); 
      
   if (st.height < 100 || st.height > 220 || st.weight < 30 || st.weight > 150 || st.schols < 0 || st.schols > 200000) {
      b = 0;
   }

   if (b == 0) {
     st.name[namesize] = '*';
   }

   return st;
}


