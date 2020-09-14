#include<stdio.h>

int main(){

int a = 0, b = 1, c;
printf("%d %d ", a, b);
while(a+b < 50000){
c = a+b;
printf("%d ", c);

a = b;
b = c;


}
printf("\n");

return 0;
}
