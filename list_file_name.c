#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
//#include "apue.h"
#include <dirent.h>
int main(int argc,char* argv[])
{
	DIR *dp;
	struct dirent *dirp;

	if(argc != 2)
	{
	   // err_quit("usage: ls directory_name");
	   perror("argument is error");
	}
	if((dp = opendir(argv[1])) == NULL)
	{
		//err_sys("can't open %s",agrv[1]);
		perror("can not open:");
	}
	while((dirp = readdir(dp)) != NULL)
	{
		printf("%s\n",dirp->d_name);
	}
	close(dp);
	exit(0);
}
