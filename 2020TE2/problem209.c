#include<stdio.h>

int gcd(int x, int y){
  if (y > x) {
    int tmp = y;
    y = x;
    x = tmp;
  }

  if(x % y == 0){
    return y;
  }else{
    return gcd(y, x%y);
  }
}
 int main(){
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d\n", gcd(a,b));

   return 0;
 }

