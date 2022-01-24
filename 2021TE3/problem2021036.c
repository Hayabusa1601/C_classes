#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h> //wait関数


int pipe_fd[2];
//変数の宣言
int i,j, status, wait_ret;



void doParent() {
    int tmp_parent = 0, tmp_pChild;//子プロセスからの格納用;

    if(wait(&status) < 0) {
        perror("wait");
        exit(1);
    }
    //0~4999の和
    for(i = 0; i < 5000; i++) {
        tmp_parent += i;
    } 
    printf("tmp_parent:%d\n", tmp_parent);

    //書き込みをクローズする
    close(pipe_fd[1]);
    //子プロセスから読み込み
    if(read(pipe_fd[0], &tmp_pChild, 4) < 0) {
        printf("readでエラー");
        exit(1);
    }
    //読み込みをクローズ
    close(pipe_fd[0]);
    printf("tmp_child from parent:%d\n", tmp_pChild);


    //答え
    printf("ans: %d\n", tmp_parent+tmp_pChild);

}

void doChild() {
    int i;
    int tmp_child = 0;
    printf("this is child. \n"); //debug

    for(i = 5000; i < 10000; i++) {
        tmp_child += i;
    }

    //まず入り口を閉じる(タイミングを合わせるため) 
    close(pipe_fd[0]);
    //親プロセスに送る
    if(write(pipe_fd[1], &tmp_child, 4) < 0){
        perror("writeでエラー");
        exit(1);   
    };
    //書き込みをクローズ
    close(pipe_fd[1]);

    printf("tmp_child from child:%d\n", tmp_child);//debug
}

int main(void) {

    if(pipe(pipe_fd) < 0) {
        perror("pipeでエラー");
        exit(-1);
    }

    //forkを格納
    pid_t result_pid;
    result_pid = fork();

    switch(result_pid) {
        /*子プロセス*/
        case 0: 
            doChild();
            break;
        /*親プロセス*/
        default:
            doParent();
            break;
    }

    return 0;

}