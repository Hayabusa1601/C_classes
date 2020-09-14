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

   for(i=10; i > 0; i--){
     for(j = 0; j <= 10; j++){
       if(b[j] >= i){
         printf(" * ");
         }else{
           printf("   ");
         }
        
}
   putchar('\n');

     }
     printf("----------------------------------\n");
     printf(" 0 10 20 30 40 50 60 70 80 90 100 \n");

     return 0;
}
