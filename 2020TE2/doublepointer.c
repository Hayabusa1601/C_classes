#include<stdio.h>
#include<stdlib.h> //mallocを使うために必要

#define ROW 30
#define COL 5

int main(void){
    int **pp;  //ダブルポインタ(ポインタのアドレスを格納できる変数)の作成
      int i, j;

        pp = (int **)malloc(sizeof(int *) * COL);  //ダブルポインタの指す先にintを指すことのできるポインタCOL個分の領域を確保
          for(i = 0; i<COL; i++)
                pp[i] = (int *)malloc(sizeof(int) * ROW);  //pp[0]~pp[ROW-1]のそれぞれの指す先に個別にint型でROW個分の領域を確保

                  for(i=0; i<COL; i++){
                        for(j=0; j<ROW; j++){
                                pp[i][j] = i+j;  //テスト用に適当な値で初期化
                                  }}

                                  /*以下，ちゃんと作れているかチェック*/
                                    for(i=0; i<COL; i++){
                                          for(j=0; j<ROW; j++){
                                                  printf("%d ",pp[i][j]);
                                                      }
                                                          printf("\n");
                                                            }
                                                            /*メモリの解放 解放する順番は重要！ */
                                                              for(i=0; i<COL; i++) free(pp[i]);  //先にfree(pp)をすると，p[0]~の先の領域を消せなくなる
                                                                  free(pp);

                                                                    return 0;
}

//変数ROWとCOLは逆の方がよかったかも・・・
///*実行結果
//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
//2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31
//3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
//4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33
//*/