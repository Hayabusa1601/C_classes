#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define COLUMN 5
#define ROW 8

int getAnsNum(int yokobou[], int maru) {
    //現在の状態を格納
    int current = maru, i, j;
   
    for(i = ROW-1; i >= 0; i--) {
      if(current == yokobou[i]) {
        printf("yokobou[i] = %d, current = %d\n", yokobou[i], current);
        current++;
      } else if(current == yokobou[i] + 1) {
        current--;
      } else {
        continue;
      }
}

return current;
}

int main(void) {
   //〇×の配列、横棒の位置を格納する配列
   char result[COLUMN+1];
   int yokobou[ROW];

   int i, j;
   srand((unsigned)time(NULL));
   
   /*〇×作成*/
   //〇の位置を指定
   int maru = (rand()%(COLUMN + 1));
   //格納
   for( i = 0; i <= COLUMN; i++ ) result[i] = 'x';//
   result[maru] = 'o';
   printf("maru:%d\n", maru);
   
   
   /*数字を表示*/
   for( i = 0; i <= COLUMN; i++ ) printf("%d   ", i);
      putchar('\n');
 
   
   /*横棒作成*/
   for( i = 0; i < ROW; i++) {
     //横棒がある列を格納
     yokobou[i] = (rand() % (COLUMN+1)) ;
   }

   int ans = getAnsNum(yokobou, maru);
   printf("%d\n", ans);
   
   /*表示処理*/
   for( i = 0; i < ROW; i++) {
      for( j = 0; j < COLUMN; j++) {
         printf("|");
         if(j == yokobou[i]) {
           printf("-%d-", yokobou[i]);
         } else {
           printf("   ");
         }
         
      }
      printf("|");
      putchar('\n');
   }
   for( i = 0; i <= COLUMN; i++ ) printf("%c   ", result[i]);
   putchar('\n');
 
   
   return 0;
}



   
