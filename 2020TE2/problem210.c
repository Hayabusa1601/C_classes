#include<stdio.h>

int main(){
  int i, ch;
  int cnt[10] = {0};
  while ((ch = getchar()) != EOF){
    for(i=0; i<=9; i++){
      if(ch == '0' + i) cnt[i]++;
  }
  }
  putchar('\n');
  puts("数字文字の出現回数");
  for(i = 0; i < 10; i++){
    printf("'%d':%d\n", i, cnt[i]);
  }

  return 0;
}

