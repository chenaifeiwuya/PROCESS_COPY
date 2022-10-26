#include <PROCESS_COPY.h>

int PROCESS_CREATE(const char* Sfile, const char *Dfile, int prono, int blocksize)
{
	pid_t pid;
	int flag;
	for(flag = 0; flag < prono; flag++)
	{
		pid = fork();
		if(0 == pid)
			break;
	}
	if(pid > 0)
	{
		printf("Parent Process %d Waiting...\n", getpid());
		PROCESS_WAIT();
	}
	else if(0 == pid)
	{
		char STRPOS[100];
		char STRBLOCKSIZE[100];
		bzero(STRPOS,100);
		bzero(STRBLOCKSIZE,100);
		int POS;
		POS = flag * blocksize;    //    要将整形变量变成字符串然后传入execl函数！
		sprintf(STRPOS, "%d", POS);//strPOS是表示子进程从什么位置开始传输 
		sprintf(STRBLOCKSIZE, "%d", blocksize);//strblocksize表示传输大小
		printf("Child Process %d POS [%d] BLOCKSIZE[%d]\n",getpid(),POS,blocksize);
		int ss = execl("/home/chneaifeiwuya/myColin_4/PROCESS_COPY/moudle/COPY", "COPY", Sfile, Dfile,STRPOS,STRBLOCKSIZE,NULL);//重载拷贝
		if(-1 == ss)
		{
			perror("失败：");
			exit(0);
		}
	}
	else{
		perror("fork call failed");
		exit(0);
	}
	return 0;

}
