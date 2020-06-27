
void t_dup(const char *s)
{
	char *s1 = 0;

	s1 = strdup(s);
	printf("strdup return   : %s\n", s1);
	free(s1);
	s1 = 0;
	
	s1 = ft_strdup(s);
	if (!s1)
	{
		printf("s1 is null");
		return;
	}
	
	printf("ft_strdup return   : %s\n", s1);
	free(s1);
	printf("\n");
}

void	t_ft_strdup()
{
//	t_dup(0); segf 
	t_dup("");
	t_dup("bonjour");
	t_dup("ABCDEFGHIJKLazertyuioppoiuytrezaqsdfghjklmmlkjhgfdsqwxcvbnnbvcxwMNOPQRSTUVWXYZ");
	printf("\n\n\n");
}
