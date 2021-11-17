#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//表とは行と列が逆の配列を定義
char transTable[7][8];

//しーざ-表を定義
char caesarTable[8][7];


   /*シーザー表を作成*/
void makeCaesarTable() {
   int i,j,k,lowerco, upperco; 
     
   for(i = 0,lowerco = 0, upperco = 0; i < 7; i++) {     
      for(j = 0; j < 4; j++, lowerco++) {
         transTable[i][j] = 'a'+lowerco;
      }
      for(k = 4; k < 8; k++, upperco++) {
        transTable[i][k] = 'A'+upperco;
      }
}
//末尾だけ別で追記
   transTable[6][2] = ',';
   transTable[6][3] = '.';
   transTable[6][6] = '!';
   transTable[6][7] = '?';

//転置させて正しい表記に
   for(i = 0; i < 8; i++) {
     for(j = 0; j < 7; j++) {
      caesarTable[i][j] = transTable[j][i];
     }
}

}

   /*暗号化関数*/
char 2dMojiShift(char c, int n, int m) {
  if( !((0 < n) && (n < 8)) ) {
      printf("エラー：nは0<n<8の範囲で入力してください。");
  else if(!((0 < m) && (m < 7)) ) {
      printf("エラー: mは0<n       "
}



int main(void) {
 //十分大きな文字配列
 char str[1000]; 
 int s;
 
 printf("文字列を入力: "); scanf("%s", str);
 putchar('\n');
 //文字列の要素数
 int nstr = strlen(str);

 //回答用の配列
 char ansstr[nstr+1];
 ansstr[nstr] = '\0';

 

 //暗号化処理
 int i;
 for(s = 0; s <= 26; s++) {
  for(i = 0; i < nstr; i++) {
   ansstr[i] = mojiShift(str[i], s);
  }
  printf("s=%d: %s\n", s,ansstr);
 }

//表ができているか確認  
//  makeCaesarTable();
//  
//  int i,j;
//  for(i = 0; i < 8; i++) {
//   for(j = 0; j < 7; j++) {
//     printf("%c ",caesarTable[i][j]);
//   }
//   putchar('\n');
//  }
//
  return 0;
}
