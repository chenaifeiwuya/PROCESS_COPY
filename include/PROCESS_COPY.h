#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

//prono：进程数量
//argno：形参数量
//Sfile：源文件
//Dfile：源文件
//blocksize：每个进程应该拷贝的大小

int CHECK_ARG(int argno, int prono, const char* Sfile);   //参数校验函数
int COPY_BLOCK_CUR(const char* Sfile, int prono);      //将需要复制到文件大小分块，每个子进程复制其中一块儿
int PROCESS_CREATE(const char * Sfile, const char* Dfile, int prono, int blocksize);   //进程创建
int PROCESS_WAIT(void);     //父进程回收子进程

