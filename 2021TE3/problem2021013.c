#include<stdio.h>
#include<math.h>
#include<sys/time.h>

//#define N 100 //デバッグ用

/*sqrt関数を使用しているため、普通にコンパイルするとエラーが出てしまうので、
 * コンパイル時、ファイル名の前もしくは後(環境により異なる)に
 * 　-lm オプションを付けてください。*/
int main(void) {
  struct timeval s,e;
  gettimeofday(&s,NULL);

  int n;
  printf("Nを入力してね:"); scanf("%d",&n);


  /*変数の宣言*/
  int lim = (int)sqrt(n);//一番外側ループ用のnの平方根 
  int prime[n]; //判定を行う配列
  int ans[n];//答えを管理する配列
  int i,j,k;//counter


   /*フラグ管理
    * 1は素数ではないので先に除外しておく*/
  for(i = 2; i < n; i++) {
    prime[i] = 0;
    prime[0] = 1;
  }
 

 /*ふるい落とし操作
  *2で始め、nの平方根まで繰り返す。内側のループでiとjを利用し倍数を除外していく。
  *この場合、prime配列の値が0であれば素数、1であれば素数ではないと判定している。
  また、偶数は2の倍数のみで良いので、偶数の場合はcontinueしている。
  また、i^2のときのi以降では確実にnをオーバーしているため、breakしている。*/
  for(i = 2; i < lim; i++) {
      if(i != 2 && i % 2 == 0) continue;
      if(i*i > n) break;

    for (j = 2; i*j <= n; j++) {
      
      if(prime[i*j - 1] == 0) {
        prime[i*j - 1] = 1;
       // printf("%d\n", prime[i*j - 1]);
      }
    }
  
  }


  //ans配列に格納
  for(i = 0,j = 0; i < n; i++) {
   if(prime[i] == 0) {
     ans[j] = i+1;
     printf("%d\n",ans[j]);
     j++;
   }
  }

  return 0;
}


   


   
  
