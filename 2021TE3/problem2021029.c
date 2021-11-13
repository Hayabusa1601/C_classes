#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char mojiShift(char c, int n) {
  char ans;

  if( c < 'A' || c > 'Z') {
     puts("エラー: A～Zで入力してください。");
     printf("入力された文字 %c\n", c);
     exit(1);

  } else if((c + n) < 'Z') {
     ans = c+n;

  } else if ((c + n) > 'Z') {
     ans = (c+n) - 'A';
}


   return ans;
}



int main(void) {
  //十分大きな文字配列
  char str[1000]; 
  int s;
  
  printf("文字列を入力: "); scanf("%s", str);
  putchar('\n');
  printf("シフト数を入力: "); scanf("%d", &s);
  putchar('\n');

  //文字列の要素数
  int nstr = strlen(str);

  //回答用の配列
  char ansstr[nstr+1];
  ansstr[nstr] = '\0';


  //暗号化処理
  int i;
  for(i = 0; i < nstr; i++) {
    ansstr[i] = mojiShift(str[i], s);
  }

  //表示
  printf("回答: %s\n", ansstr);
  return 0;
}
