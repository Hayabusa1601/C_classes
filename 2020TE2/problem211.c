#include<stdio.h>
#define N 10000

int main(){

  int i, a;
  char s[N][128];
  
  for (i=0; i < N; i++){
    printf("s[%d] : ", i);
    scanf("%s", s[i]);
    if(s[i] == "$$$$$"){
      a = i;
       break;
  }
  }

  for(i = 0; i < a; i++)
    printf("s[%d] = \"%s\"\n", i, s[i]);

    return 0;
  }



