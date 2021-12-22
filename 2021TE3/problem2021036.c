#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int pipe_fd[2];

int main (void) {
  int sum, result_pid, i, status;
  result_pid = fork();

  switch ( result_pid ) {
    case -1:
      printf("Not Found\n");
      exit(0);
      break;

    case 0:
      for (sum=0, i=5000; i < 10000; i++) {
        sum+=i;
      }
      if(write(pipe_fd[1], sum, 4) < 0) {
        perror("write");
        exit(1);
      }

      close(pipe_fd[1]);
      if(wait(&status) < 0) {
        perror("wait");
        exit(1);
      }
      break;

    default:
      for(sum=0, i=0; i<5000; i++) {
         sum+=i;
      }
      wait(&status);
      sleep(1);
      close(pipe_fd[1]);
      if(i=read((pipe_fd[0], &sum, 1)) > 0) {
        printf("%d\n", sum);
      }
      putchar('\n');
      close(pipe_fd[0]);
      break;
  }
return 0;
}




      
      



      


