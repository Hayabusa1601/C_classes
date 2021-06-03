#include<stdio.h>

void arraysort(int *arr,int n);


int main(void) {
    int a[10] = {21,321,12,1,54,6332,3,45,23,546};
    int i;
    for(i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d ", a[i]);

    }
    putchar('\n');


    arraysort(a, sizeof(a)/sizeof(a[0]));

    for(i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%d ", a[i]);

    }
    putchar('\n');
}

void arraysort(int *arr, int n) {
    int i,j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
         if(*(arr + i) < *(arr + j)) {
             int tmp = *(arr + i);
             *(arr + i) = *(arr + j);
             *(arr + j) = tmp;
         }   
        }
    }
}