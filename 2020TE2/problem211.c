#include<stdio.h>
#define N 10000

int main(){

  int i, j,a;
  char s[N][128];
  
  for (i=0; i < N; i++){
    printf("s[%d] : ", i);
    scanf("%s", s[i]);

    for(j = 0; s[i][j] != '\0'; j++){
      if(s[i][j] != '$') break;

  }
   a = i;
  if(j == 5) break;

  }

  for(i = 0; i < a; i++)
    printf("s[%d] = \"%s\"\n", i, s[i]);

    return 0;
  }



