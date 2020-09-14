#include <stdio.h>
#define abs(a) (a > 0) ? (a) : -(a)

int main(void){
    int n, i, j;
      printf("何段?: ");
        scanf("%d", &n);
         
      for(i = 0; i <= n; i++){
        if(n / 2 + !!(n % 2) == i) continue;
          int star = abs(n - i * 2);
         for(j = 0; j < n; j++){
          int a = (n - star) / 2;
            if(j < a || j > n - a - 1) putchar(' ');
            else putchar('*');
                    }
        putchar('\n');
        }
            return 0;
}




