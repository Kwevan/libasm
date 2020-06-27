
void t_cpy(const char *src)
{
	char dest1[500];
        char dest2[500];

        bzero(dest1, 500);
        bzero(dest2, 500);
	printf("strcpy return   : %s\n", strcpy(dest1, src));
	printf("ft_strcpy return: %s\n", strcpy(dest2, src));
	printf("\n");
}

void	t_ft_strcpy()
{
//	t_cpy(0); //segf
	t_cpy("");
	t_cpy("bonjour");
	t_cpy("lsdlskdlksdlksdlkdslksdlkdslksdlkdslksdlksdlkdsldsklsdklsdkldsklksdlskdlskdlksdlkdslksdlkdslkdslkdslksdlksdlksdlksdlksldkdslkdslkdslkdslkdslkdslksdlkdslksdldsklsdklsdksdlksdlksdlkdslskdldskABCDEFGHIJKLMNOPQRSTUVWXYZ");
	
	printf("\n\n\n");
}
