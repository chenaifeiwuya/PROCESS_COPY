#include <PROCESS_COPY.h>

int PROCESS_WAIT(void)
{
	pid_t zpid;
	while(( zpid = wait(NULL)) != -1){
		printf("Wait Zoombie Pid %d\n",zpid);
	}
	return 0;
}
