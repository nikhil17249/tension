#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <errno.h>
#include <unistd.h>
int main(int argc,char** argv)
{
	printf("invoking\n");
	int pid = atoi(argv[1]);
	long int status = syscall(318,pid,argv[2]);
	if(status == 0)
		printf("success\n");
	else
		printf("unsuccess\n");
	return 0;
}
