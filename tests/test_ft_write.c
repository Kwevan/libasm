void	my_write(int fd,const void *buf, size_t count)
{
        int ret = 0;
        ret = ft_write(fd, buf, count);
        printf("\nft_write return    : %d\n", ret);
        printf("\n");
}

void original_write(int fd,const void *buf, size_t count)
{
	int ret = 0;
	ret = write(fd, buf, count);
	printf("\nwrite return    : %d\n", ret);
	printf("\n");
}

void	t_ft_write()
{
	int fd;

	fd = 0;
	if (!(fd = open("tests/txt_files/write.txt", O_RDWR)))
	{
		printf("Error in fd");
		return ;
	}
	original_write(fd, "Ce que l'on écrit dans le fichier write.txt situé dans tests/txt_files/", 73);
	close(fd);
	
	if (!(fd = open("tests/txt_files/ft_write.txt", O_RDWR)))
	{
		printf("Error in fd");
		return ;
	}
	my_write(fd, "Ce que l'on écrit dans le fichier write.txt situé dans tests/txt_files/", 73);
	close(fd);


	printf("\n\n********************\n\n");
	
	
	original_write(-30, "wrong fd test", 73);
	printf("errno: %d\n", errno);
        printf("errno msg: %s\n\n\n", strerror(errno));
	errno = 0;
	
	printf("\n\n");
  	
	my_write(-30, "wrong fd test", 73);
        printf("errno: %d\n", errno);
        printf("errno msg: %s\n\n\n", strerror(errno));
	
	
	printf("\n\n********************\n\n");
	
	
	original_write(STDOUT_FILENO, "\nstdout test\n", 12);
	
	printf("\n\n");
	
	my_write(STDOUT_FILENO, "\nstdout test\n", 12);

}
