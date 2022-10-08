#include<stdio.h>
#include<dirent.h>
struct dirent *dptr;

void main(int argv, char *arg[]){
	char buff[100];
	DIR *dirp;
	printf("\nEnter Directory Name: ");
	scanf("%s", buff);
	if((dirp=opendir(buff)) == NULL){
		printf("\nThe given directory does not exist");
	}
	while(dptr=readdir(dirp)){
		printf("%s\n",dptr -> d_name);
	}
	closedir(dirp);
}
