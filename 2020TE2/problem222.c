#include<stdio.h>

int  tasu(int a, int b);
int  hiku(int a, int b);
int  kake(int a, int b);
int  waru(int a, int b);

int main(void){
  int x , y;
  printf("一つ目の数を入力してください:"); scanf("%d", &x);
  printf("二つ目の数を入力してください:"); scanf("%d", &y);

  int (*sansuu[4])(int a, int b) = {tasu, hiku, kake, waru};
  int i;

  printf("どれを実行しますか？");
  printf("足し算＝０，引き算＝１，掛け算＝２，割り算＝３:");
  scanf("%d", &i);

  printf("答えは%dです",(*sansuu[i])(x, y));
  return 0;
}

int tasu(int a, int b){
  return a+b;
}

int hiku(int a, int b){
  if(a < b){
      return b - a;
  }else{
      return a - b;
  }
}

int kake(int a, int b){
  return a*b;
}

int waru(int a, int b){
  if(b == 0){
    printf("割れません。");
    return 0;
  }else{
    return a / b;
  }
}



