#include<stdio.h>

int main(){
  int i;
  int x[7];

  for(i = 0; i < 7; i++){
    printf("x[%d] : ",i);
    scanf("%d", &x[i]);
}

  for(i = 0; i < 3; i++){
    int t = x[i];
    x[i] = x[6-i];
    x[6-i]=t;
  }
  puts("反転しました");
  for(i = 0; i < 7; i++) printf("x[%d] = %d\n", i , x[i]);

  return 0;

}

