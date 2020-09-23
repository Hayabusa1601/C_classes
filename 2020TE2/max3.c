#include<stdio.h>
#include<math.h>

int max (int o, int p);//プロトタイプ宣言
int max3(int x, int y, int z);//プロトタイプ宣言

int main(){
    int a = 10, b = 12, c = 14;
    printf("３つの数の中で一番大きい数は%dです。\n", max3(a,b,c));
    return 0;
}

int max(int o, int p){
    return o > p ? o : p;//条件演算子
}

int max3(int x, int y, int z){
    return max(max(x,y), z);
}
//実装後記　変数名をごちゃごちゃさせるとくっそ気持ち悪い
