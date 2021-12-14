#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define PI 3.1415926536

int main(void) {

  int i, L, a, count = 0;
  double rad1 = 3.1415926536/(double)180;
  srand((unsigned)time(NULL));


  printf("直線の幅:"); scanf("%d",&L);
  printf("針の長さ:"); scanf("%d",&a);  


  
  for(i = 0; i < 100000; i++) {
    //位置
    int position = (rand() % L);
    //printf("位置:%d ", position);      

    //縦の長さ
    double angle = (rand() % 180);
    //printf("角度:%.5lf ",angle);
    double ver = a *(sin(angle * rad1));
    //printf("縦の長さ:%.5lf\n", ver);

    if(L <= (double)position + ver || position == 0) {
      //printf("交わった！\n");
      count++;
    }



  }

  printf("回数:%d", count);
  putchar('\n');
  double ansper = (2*a) / (L*PI);
  printf("理想的な確率:%lf\n", ansper);
  double percent = (double)count/100000;
  printf("導出した確率:%lf\n", percent);
  printf("円周率(理想):%lf\n", (2*a)/(L*ansper));
  printf("円周率(導出):%lf\n", (2*a)/(L*percent));


  return 0;

}

