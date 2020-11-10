#include<stdio.h>

void decriment_date(int *y,int *m,int *d){
  int flag = 0;
  if(*y % 4 == 0 && *y % 100 != 0 || *y % 400 == 0){
    flag = 1;
  }//うるう年フラグ

  if(*d != 1){
    (*d)--;//1でなければdのみ変わる

    }else{
      if(*m != 1){
        (*m)--;

     }else{
        (*y)--;
        *m = 12;//1日だと月が変わる、かつ1月だと年も変わる

      }

      if(*m == 2 && flag){
        *d = 29;//うるう年

      }else if(*m == 2 && !flag){
        *d = 28;//うるう年ではない

      }else if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
        *d = 30;//月末が30日のとき

      }else{
        *d = 31;//月末が31日のとき
          
     }
   }
}       
void incriment_date(int *y,int *m,int *d){
 int flag = 0;
  if(*y % 4 == 0 && *y % 100 != 0 || *y % 400 == 0){
    flag = 1;

  }//うるう年フラグ
   
  if(*m == 2 && flag && *d != 29){
    (*d)++;
    
  }else if(*m == 2 && !flag && *d != 28){
    (*d)++;

  }else if(*m == 4 || *m == 6 || *m == 9 || *m == 11 && *d != 30){
    (*d)++;

  }else if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12 && *d != 31){
    (*d)++;
//ここまで最終日かの判定、最終日じゃなければインクリメント
  }else{
    if(*m != 12){
      (*m)++;

    }else{
      (*y)++;
      *m = 1;

    }
    *d = 1;
  }
}

int main(void){
  int year, month, date,flag=0;
  printf("年を入力してください："); scanf("%d", &year);
  printf("月を入力してください："); scanf("%d", &month);
  printf("日を入力してください："); scanf("%d", &date);
  printf("翌日なら1を、昨日なら0を入力してください:"); scanf("%d", &flag);
  
  printf("あなたが入力した日付は%d年%d月%d日です。\n", year, month, date);
  
  if(flag == 0){
  decriment_date(&year, &month, &date);
  printf("昨日は%d年%d月%d日です。\n", year, month, date);
  }else{
  incriment_date(&year, &month, &date);
  printf("翌日は%d年%d月%d日です。\n", year, month, date);
}
  return 0;
}

  
