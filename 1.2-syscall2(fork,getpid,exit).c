#include<stdio.h>
#include<unistd.h>
void main(){
	int pid, pid1, pid2;
	pid = fork();
	if(pid == -1){
		printf("\nERROR IN PROCESS CREATION\n");
	}
	if(pid != 0){
		pid1 = getpid();
		printf("\nThe Parent Process ID: %d\n",pid1);
	}
	else{
		pid2 = getpid();
		printf("\nThe Child Process ID: %d\n",pid2);
	}
}
