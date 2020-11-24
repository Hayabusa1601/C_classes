#include<stdio.h>

void put_string(const char *s){
int i = 0;
   while(*(s+i)){
     printf("%c", *(s+i));
     i++;
   }
   ptchar('\n');
}


int main(){
  char s[256];
  printf("入力:");  scanf("%s",s);

  put_string(s);
  return 0;
  }


