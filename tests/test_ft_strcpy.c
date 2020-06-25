
void t_cpy(const char *src)
{
	char dest1[50];
        char dest2[50];

        bzero(dest1, 50);
        bzero(dest2, 50);
	printf("strcpy return   : %s\n", strcpy(dest1, src));
	printf("ft_strcpy return: %s\n", ft_strcpy(dest2, src));
	printf("\n");
}

void	t_ft_strcpy()
{
//	t_cpy(0); //segf
	t_cpy("");
	t_cpy("bonjour");
	t_cpy("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	printf("\n\n\n");
}
