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



 /*文字の行番号、列番号を取得*/
int picMoji1(char pic) {
   int i,j;
   int ans, flag = 0;
   for(i = 0; i < 8; i++) {
     for(j = 0; j < 7; j++) {
       if(caesarTable[i][j] == pic) {
         ans = i;
         flag = 1;
         break;
     }
     if(flag == 1) break;
   }
}
   return ans;
}
 
int picMoji2(char pic) {
   int i,j;
   int ans, flag = 0;
   for(i = 0; i < 8; i++) {
     for(j = 0; j < 7; j++) {
       if(caesarTable[i][j] == pic) {
         ans = j;
         flag = 1;
         break;
     }
     if(flag == 1) break;
   }
}
   return ans;
}

   /*暗号化関数*/
char twoDMojiShift(char c, int n, int m) {
 
 //文字の行番号、列番号
  int c1, c2, ans1, ans2;
  c1 = picMoji1(c); 
  c2 = picMoji2(c);




  if (!((n < 8))) { 
      printf("エラー：nは0<n<8の範囲内で入力してください。");

  } else if (!((m < 7)) ) {
      printf("エラー: mは0<m<7の範囲で入力してください。");

  } else {   
      ans1 = c1 + n;
      ans2 = c2 + m;
      
      /*
      printf("c1: %d ", c1);
      printf("c2: %d ", c2);
      printf("ans1: %d ", ans1);
      printf("ans2: %d\n", ans2);
      */

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
 int s, n, m, ch;
 int i = 1,j;
 makeCaesarTable();
 str[0] = ' ';
 
 /*入力処理*/
 printf("文字列を入力 :");
 
 while ( (ch = getchar()) != EOF) {
    //誤作動を防止
	 if(ch == '\n'|| ch == 0 || ch == 1 || ch == EOF) continue; 
     
    str[i] = ch;
	 i++;	
}


 //配列の要素数
 int nstr = i;

 //printf("n: %d\n", nstr);
 //for(i = 0; i < nstr; i++) printf("str[%d]; %d \n", i, str[i]); 
 //回答用の配列
 char ansstr[nstr];


int p,q;

int count = 1;
 //暗号化処理      
for(p = 0; p < 8; p++) {
   for(q = 0; q < 7; q++) {
     for(i = 0 ; i < nstr; i++) {
    if (str[i] == ' '){
      ansstr[i] = ' '; //空白を除外

    } else {
      ansstr[i] = twoDMojiShift(str[i], p, q); 
    }
   }
      printf("回答%d: %s\n", count, ansstr);
      count++;
   }
 }
//暗号化できているか確認
/*
makeCaesarTable();
char s = twoDMojiShift(' ', 6,1);
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
