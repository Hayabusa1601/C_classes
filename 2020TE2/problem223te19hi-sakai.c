#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void janken();

/* ヌメロンです*/
int rararands(void){

  return rand() % 9 + 1;
}//乱数の指定

void makeans(int *ans){//ここの引数が不安です。
  int (* prands)(void);
  prands = rararands;
  while(1){
     int i;
     for(i = 0; i < 3; i++){
      int tmp = prands();
      ans[i] = tmp; 
    }
     if(ans[0] != ans[1] && ans[1] != ans[2] && ans[0] != ans [2]){
       break;
     }else{
       continue;
  }
}
}



int main(void){
  srand((unsigned int) time (NULL));
  int i, j;
  char diff[10];
  int chance;

  int *ans;
  ans = (int*)malloc(sizeof(int)*3);//mallocで配列のように扱う
  int *tans;
  tans = (int*)malloc(sizeof(int) * 3);//判別用の領域を確保
  int *ya;
  ya = (int*)malloc(sizeof(int)*3);//入力用の領域を確保
  if(ans ==NULL && tans == NULL && ya == NULL){
    puts("領域が確保できませんでした。");
    exit(1);
  }

  makeans(ans);
  for(i = 0; i < 3; i++){
    tans[i] = ans[i];
   }


  while(1){
    puts("難易度を選択してね");
    puts("easy = 0, normal = 1, hard = 2");
    printf(":"); scanf("%s", diff);

    if(diff[0] == '0'){
      chance = 12;
      break;
    }else if(diff[0] == '1'){
      chance = 7;
      break;
    }else if(diff[0] == '2'){
      chance = 3;
      break;
    }else if(strcmp(diff,"janken") == 0){
      janken();
      continue;
    }else{
      printf("おまえは何を言っているんだ？\n\n");
      continue;
    }
    
}

   puts("1から9の三桁のかぶりのない数字を当てるゲームだ。");
   puts("数字とその位置が合致したらeat、数字は合っているが位置が違う場合はbiteと言うぞ。");
int eat,bite;
   while(1){
     if(chance == 0){
       puts("残念、ゲームオーバーだよ。");
       printf("答えは%d%d%dだ。\n", tans[0], tans[1], tans[2]);
       break;
    }//Gameoverの判定
     eat = 0;
     bite = 0;
     for (i = 0; i < 3; i++){
       printf("%d桁目の数字を入力してね>>", i+1);
       scanf("%d", &ya[i]);

    }//入力
     if(tans[0] == ya[0] && tans[1] == ya[1] && tans[2] == ya[2]){
       puts("3eatだ。君の勝利だ。");
       break;//勝ち
     }else{
       for(i = 0; i < 3; i++){
         if(tans[i] == ya[i] ){
          eat++;//eatの判定。biteの判定とともに二重ループで。
         }
           for(j = 0; j < 3; j++){
             if(tans[i] == ya[j]){
               bite++;//biteの判定
             }}
       }
       bite -= eat;//eatとbiteのかぶりをなくす
       chance--;//挑戦権をへらす
       printf("%deat %dbite!　チャンスはあと%d回\n\n", eat, bite, chance);
     }
   }

   free(ans);
   free(tans);
   free(ya);
   return 0;
}

void janken(){
  srand((unsigned int)time(NULL));
  int jk, hondaans;
  hondaans = rand() % 3;
  printf("じゃ～んけ～ん\n");
  printf("グー:0　チョキ:1　パー:2\n");
  scanf("%d", &jk);

  puts("ぽん！！！");
  switch(hondaans){
    case 0: puts("相手：グー");
    case 1: puts("相手：チョキ");
    case 2: puts("相手：パー");
  }
  sleep(1);
  switch(jk){
    case 0: puts("自分：グー");
    case 1: puts("自分：チョキ");
    case 2: puts("自分：パー");
  }
  sleep(1);

  if(hondaans == jk){
    puts("あいこ！！");
  }else if(hondaans == 0 && jk == 2){
    
      }
  
  
  }



      











    








