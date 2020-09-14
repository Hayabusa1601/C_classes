#include<stdio.h>
#define N 5

int main(){
  int i;
  int s[N];
  int mx,mn;

  printf("%d人の点数を入力してください\n", N);
  for(i = 0; i < N; i++){
    printf("%2d番 : ", i + 1);
    scanf("%d",&s[i]);
  }
  mn = mx = s[0];
  for(i = 1; i < N; i++){
    if(s[i] > mx) mx = s[i];
    if(s[i] < mn) mn = s[i];
  }
  printf("最高点 : %d\n", mx);
  printf("最低点 ; %d\n", mn);
  return 0;
}

