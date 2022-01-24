#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h> //wait関数

void endMessage(void) {
    printf("This Program ended\n");
}

int main(void) {

    FILE *fp;//ファイルポインタの宣言
    //forkを格納
    pid_t result_pid;
    result_pid = fork();

    //変数の宣言
    int i,j, status, wait_ret;
    int tmp_child = 0, tmp_parent = 0;


    switch(result_pid) {
        /*子プロセス*/
        case 0: 
            //tmp_childに5000~10000の和を格納
            for(i = 5000; i < 10000; i++) {
                tmp_child += i;
            }

            //035.txtに結果を書き出し
            fp = fopen("035.txt", "w");
            fprintf(fp, "%d", tmp_child);
            printf("tmp_child from child:%d\n", tmp_child);
            break;

        default:
            wait_ret = wait(&status);//子プロセスが終了するまで待機
            sleep(1);
            //0~4999の和を格納
            for(i = 0; i < 5000; i++) {
                tmp_parent += i;
            } 
            printf("tmp_parent:%d\n", tmp_parent);

            //035.txtから子プロセスの結果を読み込み
            fp = fopen("035.txt", "r");
            fscanf(fp, "%d", &tmp_child);
            printf("tmp_child from parent:%d\n", tmp_child);

            //答え
            printf("ans: %d\n", tmp_parent+tmp_child);

            break;
    }

    fclose(fp);

    return 0;

}

