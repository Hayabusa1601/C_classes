/*
 * problem2021006
 * List12-3をもとに、オブジェクトtakaoの
 * 各メンバのアドレスを表示するプログラムの作成*/

#include<stdio.h>

#define NAME_LEN 64
/*構造体の宣言*/
/*メンバ：構造体の中で宣言される変数のこと*/
struct student {
  char  name[NAME_LEN]; //名前
  int   height;         //身長
  float weight;         //体重
  long  schols;         //奨学金
};

/*アドレスの表示*/
int main(void) {
   struct student takao = {"Takao", 173,86,2};
   printf("氏名のアドレス = %p\n", &takao.name);
   printf("身長のアドレス = %p\n", &takao.height);
   printf("体重のアドレス = %p\n", &takao.weight);
   printf("奨学金のアドレス = %p\n", &takao.schols);

   return 0;
}

