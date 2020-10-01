#include<stdio.h>
#define max(x,y) (((x) > (y)) ? (x) : (y))

int main(){
  int a = 1, b = 2, c = 3, d = 4;
  int mp1 = max(max(a,b), max(c,d));
  /*このとき、まずaとbが比較され、次にcとdが比較される。
   *そのひかくされたもの同士がさらに比較され、どれが最も大きいか
   *判定して代入されている */
  int mp2 = max(max(max(a,b), c),d);
   /*このとき、aとbを比較し、さらにaとbを比較したものをcと比較し、
    * さらにさらにaとbとcを比較したものをdと比較させてどれが最も大きいか
    * 判定して代入されている。 */
  printf("%d %d\n", mp1, mp2);
  return 0;
}

