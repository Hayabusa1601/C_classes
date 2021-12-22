#include<stdio.h>

void endMessage(void) {
  printf("プログラムが終了しました。\n");
}

int main(void) {
  int i;
  atexit(endMessage);
  for(i = 0; i < 10; i++) {
    puts("処理");
}
return 0;

}


