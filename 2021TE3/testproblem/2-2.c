#include<stdio.h>
#include<math.h>

int main(void) {
   unsigned int num;
   printf("数字を入力 :"); scanf("%d", &num);
   
   unsigned int value = 1;
   int co = 0;

   while(num > value){
     if(num % value == 0.00) {
       co++;
     }
     printf("value:%d\n",value);
     value++;
}
   
   printf("割り切れる整数の数:%d\n",co);
   return 0;


}

