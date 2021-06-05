#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int *p1, *p2;
    int n,j;

    p1 = (int *)malloc(sizeof(int));
    for(n = 0; scanf("%d", &*(p1 + n)) != EOF; ){
        p2 = p1;
        n++;
        p1 = (int *)malloc(sizeof(int) * (n + 1));
        for(j = 0; j <= n; j++) {
            *(p1 + j) = *(p2 + j);
        }
        free(p2);
    }

    for(j = 0; j < n; j++) {
        printf("%d ", *(p1 + j));
    }
    putchar('\n');

    return 0;
}