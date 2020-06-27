#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	int ret = ft_read(-3, "", 1);
	printf("errno: %d ", errno);
	printf("errno: %s ", strerror(errno));
	printf("ret: %d ", ret);
}
