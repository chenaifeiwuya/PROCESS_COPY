#include <PROCESS_COPY.h>

int CHECK_ARG(int argno, int prono, const char* Sfile)
{
	if(argno < 3)
	{
		printf("错误：参数数量异常，请求检查参数重新启动.\n");
		exit(0);
	}
	if(prono <= 0 || prono >= 100){
		printf("错误：进程数量不允许小于0，大于100.\n");
		exit(0);
	}
	if((access(Sfile, F_OK)) != 0)
	{
		printf("错误：源文件不存在.\n");
		exit(0);
	}
	return 0;
}
