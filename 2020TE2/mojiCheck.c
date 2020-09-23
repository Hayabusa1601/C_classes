#include<stdio.h>

void mojiCheck(int x){
    if (x <= -128 || x >= 127) printf("無効な値です\n");
    char c = (char) x;//文字コードを元に変換するので、97から123までの間だと文字が出力される……はず。
    printf("%c\n", c);
}

int main(){
    int a = 97;
    mojiCheck(a);
    return 0;
}

