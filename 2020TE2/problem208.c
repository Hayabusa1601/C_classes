#include<stdio.h>

int combi(int n, int r){
  if(n == 0 || n == r){
    return 1;
    }else if(r == 1){
      return (n);
    }else{
      return combi(n - 1, r - 1) + combi(n-1, r);
    }
    }


   int main(){
     int a,b;
     scanf("%d %d", &a, &b);
     int ans = combi(a,b); 
     printf("%d\n", combi(a,b));
     
     return 0;
   }

       
