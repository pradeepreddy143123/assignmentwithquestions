#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <utime.h>


int main()
{
	int ret;
	char buff[20];
	struct utimbuf temp;
	utime("kernel",&temp);
	close(ret);
}
