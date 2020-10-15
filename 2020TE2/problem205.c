#include<stdio.h>

enum sexual { Male, Female};
enum season { Spring, Summer, Autumm, Winter, Invalid };
enum kyushu { Fukuoka, Saga, Kumamoto, Nagasaki, Oita, Miyazaki, Kagoshima, Okinawa};

void spring(){
  puts("春です");
}
void summer(){
  puts("夏です");
}
void autumm(){
  puts("秋です");
}
void winter(){
  puts("冬です");
}

enum season select(){
  int tmp;
  do {
    printf("0…春,1…夏,2…秋,3…冬, 4…終了");
    scanf("%d",&tmp);
  }while (tmp < Spring || tmp > Invalid);
  return tmp;
}

int main(){
  enum season s;
  do {
    switch(s = select()){
      case Spring : spring(); break;
      case Summer : summer(); break;
      case Autumm : autumm(); break;
  }
    }while (s != Invalid);
    return 0;
  
}
