/* 一つのプログラムでセーブ＆ロード*/
/*problem2021004*/

#include<stdio.h>

int main(void) {
  /*define values*/
  int a1, a2;
  double b1, b2;
  char c1, c2;
  FILE *fp;

/*input*/
  a1 = 1;
  b1 = 2.2;
  c1 = 'x';

/*write on "temp.txt"*/
fp = fopen("temp.txt", "w");
fprintf(fp, "%d %f %c\n", a1, b1, c1);
fclose(fp);


/*open "temp.txt" and show "temp.txt"*/

fp = fopen("temp.txt", "r");
fscanf(fp, "%d %lf %c", &a2, &b2, &c2);
fclose(fp);

printf("%d %f %c\n", a2, b2, c2);

return 0;
}





