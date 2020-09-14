#include<stdio.h>
#define N 5
int main(){
   int i,j;
   for(i = 0; i < N; i++){
     for(j = 0; j < 2*N-1; j++){
       if((N-i-2) < j && j < (N+i)){
         printf("*");
         }else{
           printf(" ");
         }
     }

         printf("\n");
     }
     return 0;
   }

