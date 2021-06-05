#include<stdio.h>
#include<stdlib.h>

#define N 100
#define M 10

int main(void) {

    double **pp;
    int i, j;

    pp = (double **)malloc(sizeof(double *)*N);
    for(i = 0; i < N; i++) {
        
        *(pp+i) = (double *)malloc(sizeof(double) * M);
    }
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            pp[i][j] = i + j;
        }
    }
    for(i = 0; i < N; i++) {
        free(*(pp + i));
    }
    free(pp);

    return 0;
}