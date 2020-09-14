#include<stdio.h>
#define N 45

int main(){
   int i = 0, j,k ,flag = 1, a[N], b[N];

   double asum = 0, bsum = 0;

   while(1){
     printf("%d人目の数学の点数を入力して下さい:", i+1);
     if(scanf("%d", &a[i]) == EOF) break;
     printf("%d人目の物理の点数を入力してください:", i+1);
     scanf("%d", &b[i]);
     i++;
   }

   putchar('\n');
   putchar('\n');

   for(j=0; j<i; j++) asum += a[j];
   for(k=0; k<i; k++) bsum += b[k];
   printf("数学の平均点は:%.6f点です。",asum / i);
   printf("物理の平均点は:%.6f点です。",bsum / i);
   putchar('\n');
   return 0;
}



