#include<stdio.h>

int main(){
  int i,j;
  int g[2] = {0,0};
  int s[6][2];
  int ssum[6]={0,0,0,0,0,0};

  for(i=0;i<6;i++){
    printf("%d人目の国語と数学の点数；", i+1);
      scanf("%d", &s[i][0]);
      scanf("%d", &s[i][1]);

  }
//科目ごとの点数の可
    for(j=0;j<6;j++){
      g[0] += s[j][0];
    }
  
    for(j=0;j<6;j++){
      g[1] += s[j][1];
    }
  
  //生徒ごとの点数の可算
  for(i=0;i<6;i++){
      ssum[i] += ( s[i][0] + s[i][1]);
  }
//表示
printf("国語の合計点は%d点、平均点は%lf点\n",g[0],(double)g[0]/6);
printf("数学の合計点は%d点、平均点は%lf点\n",g[1],(double)g[1]/6);

for(i=0;i<6;i++){
  printf("%d人目の合計点は:%d点、平均点は、%lf点。\n",i, ssum[i],(double)ssum[i]/6);
}

return 0;
}



