#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//しーざ-表を定義
char caesarTable[8][7];


   /*シーザー表を作成*/
void makeCaesarTable() {
   int i,j,k,lowerco, upperco; 

//表の入力
   for(i = 0,lowerco = 0, upperco = 0; i < 7; i++) {     
      for(j = 0; j < 4; j++, lowerco++) {
         caesarTable[j][i] = 'a'+lowerco;
      }
      for(k = 4; k < 8; k++, upperco++) {
         caesarTable[k][i] = 'A'+upperco;
      }
}
//末尾だけ別で追記
   caesarTable[2][6] = ',';
   caesarTable[3][6] = '.';
   caesarTable[6][6] = '!';
   caesarTable[7][6] = '?';


}




 /*文字の行番号、列番号をアドレスに取得*/
void picMoji(char pic, int* pic1, int* pic2) {
   int i,j;
   int ans;
   for(i = 0; i < 8; i++) {
     for(j = 0; j < 7; j++) {
       if(caesarTable[i][j] == pic) {
         *pic1 = i;
         *pic2 = j;
     }
   }
}
}
 
   /*暗号化関数*/
char twoDMojiShift(char c, int n, int m) {
 
 //文字の行番号、列番号
  int c1, c2, ans1, ans2;
  picMoji(c, &c1, &c2); 

  if (!((0 < n) && (n < 8))) { 
      printf("エラー：nは0<n<8の範囲内で入力してください。");

  } else if (!((0 < m) && (m < 7)) ) {
      printf("エラー: mは0<m<7の範囲で入力してください。");

  } else {   
      ans1 = c1 + n;
      ans2 = c2 + m;
      //printf("c2: %d ", c2);
      //printf("ans1: %d ", ans1);
      //printf("ans2: %d\n", ans2);
  }
  
  if (ans1 > 7) {
      ans1 -= 8;
  }

  if (ans2 > 6) {
     ans2 -= 7;
  }

  char ans = caesarTable[ans1][ans2];
  return ans;

}






int main(void) {
 //十分大きな文字配列
 char str[1000] = {0}; 
 int s, n, m, ch;
 int i = 0;

 makeCaesarTable();

 printf("シフト数1を入力 :"); scanf("%d", &n);
 printf("シフト数2を入力 :"); scanf("%d", &m);


 printf("文字列を入力 :");
 //入力処理
 while ( (ch = getchar()) != EOF) {
	 str[i] = ch;
	 i++;	
}
 printf("str: %s\n", str);

 
 //配列の要素数
 int nstr = strlen(str);

 //回答用の配列
 char ansstr[nstr+1];
 ansstr[nstr] = '\0';

 
 //暗号化処理
 for(i = 0; i < nstr; i++) {
	 if(str[i] == ' '){
		ansstr[i] = ' ';
	 } else {
    ansstr[i] = twoDMojiShift(str[i], n, m);
  }
 }
  //表示
 printf("回答: %s\n", ansstr);


//暗号化できているか確認
/*
makeCaesarTable();
char s = twoDMojiShift('y', 6,1);
printf("ans:%c\n", s);
*/

//表ができているか確認  
 /*
 makeCaesarTable();  
 int i,j;
 for(i = 0; i < 8; i++) {
  for(j = 0; j < 7; j++) {
    printf("%c ",caesarTable[i][j]);
  }
  putchar('\n');
 }
 */
  return 0;
}
