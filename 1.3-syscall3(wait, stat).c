#include<stdio.h>
#include<unistd.h>
void main(){
  int stat;
  pid_t pid;
  pid = fork();
  if(pid == 0)
    printf("\nThe Child Process is running\n");
  else{
    printf("\nThe Parent Process is running\n");
    sleep(20);
    wait(&stat);
  }
}
