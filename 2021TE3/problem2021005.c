/*temp.txtをオープンして追記する*/
/*problem2021005*/

#include<stdio.h>
int main(void) {

  int a3;
  FILE *fp;

  a3 = 3;

  fp = fopen("temp.txt", "a");
  fprintf(fp,"%d\n", a3);
  fclose(fp);

  return 0;
}

