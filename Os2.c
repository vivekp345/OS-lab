#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int pid,pid1,pid2;
	pid=fork();
	if(pid==-1){
		printf("error in process creation\n");
		exit(1);
	}
	if(pid!=0){
		pid1=getpid();
		printf("\n the parent process id is%d\n",pid1);
	}else{
		pid2=getpid();
		printf("\n the child process id is %d\n",pid2);
	}
	return 0;
}
