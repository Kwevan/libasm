
void my_read(int fd, int len)
{
        char *buf = NULL;
        ssize_t ret = 0;

        if (!(buf = (char *)malloc(len + 1)))
                return ;
        bzero(buf, len + 1);
        ret = ft_read(fd, buf, len);
        printf("ft_read buf    : %s\n\n", buf);
        printf("ft_read return    : %zd\n", ret);
        printf("\n");
        free(buf);
}

void original_read(int fd, int len)
{
	char *buf = NULL;
	ssize_t ret = 0;

	if (!(buf = (char *)malloc(len + 1)))
		return ;
	bzero(buf, len + 1);
	ret = read(fd, buf, len);
	printf("read buf    : %s\n\n", buf);
	printf("read return    : %zd\n", ret);
	printf("\n");
	free(buf);
}

void	t_ft_read()
{
	int fd;

	fd = 0;
	if (!(fd = open("tests/txt_files/f.txt", O_RDONLY)))
	{
		printf("Error in fd");
		return ;
	}
	original_read(fd, 81);
	printf("errno: %d\n\n", errno);

	printf("\n\n");
	
	if (!(fd = open("tests/txt_files/f.txt", O_RDONLY)))
	{
		printf("Error in fd");
		return ;
	}
	my_read(fd, 81);
	printf("errno: %d\n\n", errno);	
	

	printf("*************\n\n");


	original_read(-1,  81);
	printf("errno: %d\n\n", errno);
        printf("errno msg: %s\n\n", strerror(errno));
	errno = 0;
	
	printf("\n\n");	

	my_read(-1, 81);
	printf("errno: %d\n\n", errno);
        printf("errno msg: %s\n\n", strerror(errno));
	
	
	printf("*************\n\n");
	

	original_read(50,  -1);
	
	printf("\n\n");
	
	my_read(50, -1);



	printf("\n\n\n");

	printf("\n\n********************\n\n");
	
	
	printf("\n\n[type something 2 times to test ft_read on stdout]\n\n");



        original_read(STDOUT_FILENO, 12);

        printf("\n\n");

        my_read(STDOUT_FILENO, 12);


}
