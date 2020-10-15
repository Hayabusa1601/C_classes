#include<stdio.h>

#define N 5

//バブルソート
void busort(int a[], int n){
//int a[]で配列aの先頭のアドレスをとる

  int i,j;
  for(i = 0; i < n-1; i++){//全部でn-1回ループする。最後は必然的に決まる
    for(j = n - 1; j > i;j--){//後ろから先頭に向けて走査する
      if(a[j-1] < a[j]){
        int tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
      }//大きかったら先頭側に送る
    }
  }
}

int main(){
  int i;
  int height[N];

  printf("%d人の身長を入力してください。\n", N);
  for(i = 0; i < N; i++){
    printf("%2d番：", i+1);
    scanf("%d", &height[i]);
  }//入力

  busort(height,N);//渡す

  puts("昇順にソートしました");
  for(i = 0; i < N; i++){
    printf("%2d番：%d\n", i + 1, height[i]);
}//出力
    return 0;
}

