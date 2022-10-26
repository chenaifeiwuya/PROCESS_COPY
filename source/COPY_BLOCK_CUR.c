#include <PROCESS_COPY.h>

int COPY_BLOCK_CUR(const char* Sfile, int prono)
{
	int fd;
	if( (fd = open(Sfile, O_RDONLY)) == -1  ){

		perror("错误：COPY_BLOCK_CUR,OPEN失败.");
		exit(0);
	}

	int fsize;
	fsize = lseek(fd, 0, SEEK_END);
	if(fsize % prono == 0)
	{
		return fsize / prono;
	}
	else{
		return fsize / prono +1;
	}
}
