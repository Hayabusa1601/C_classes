#include<stdio.h>
#define N 80
int main(){
   int i,j; //ループ変数
   int num; //人数
   int co[N]; // 学生の点数
   int b[11] = {0}; // 分布

   printf("人数を入力してください");
   do{
      scanf("%d",&num);            
      if(num < 1 || num > N ) {      // 入力された値が範囲内か調べる
        printf("\a1から%dまでで入力してください", N);
      }

     }while(num < 1 || num > N);

     for(i = 0; i < num; i++){
       printf("%2d : ", i + 1); // numまで入力させる
       do { 
         scanf("%d", &co[i]);
         if(co[i] < 0 || co[i] > 100){     //1～100だけ読み込むようにする
           printf("\a 1から100で入力してください :");
         }
       }while(co[i] < 0 || co[i] > 100);
       b[co[i] /10]++;
}
puts("\n -----分布グラフ-----");
printf("           100:");

for(j = 0; j < b[10]; j++){
  putchar('*');
}
putchar('\n');

  for(i = 9; i >= 0; i--){
   printf("%3d ～ %3d: ",i * 10,i * 10+9);
    for(j = 0; j < b[i]; j++){    //100点未満の判定:
      putchar('*');
     
    }
    putchar('\n');
  }
return 0;}





