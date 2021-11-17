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

//行と列が逆のまま表を設定（そのほうがやりやすい）     
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
      return 0;
  } else if (!((0 < m) && (m < 7)) ) {
      printf("エラー: mは0<m<7の範囲で入力してください。");
      return 0;
  } else {   
      ans1 = c1 + n;
      ans2 = c2 + m;
      printf("c1: %d ", c1);
      printf("c2: %d ", c2);
      printf("ans1: %d ", ans1);
      printf("ans2: %d\n", ans2);
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


//暗号化できているか確認
//makeCaesarTable();
//char s = twoDMojiShift('a', 3, 3);
//printf("ans:%c\n", s);
 

//表ができているか確認  
//  makeCaesarTable();  
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
