
void t_cmp(const char *s1, const char *s2)
{
	printf("strcmp return    : %d\n", strcmp(s1, s2));
	printf("ft_strcmp return : %d\n", ft_strcmp(s1, s2));
	printf("\n");
}

void	t_ft_strcmp()
{
	t_cmp("", "");
	t_cmp("", "a");
	t_cmp("a", "");
	t_cmp("Bienvenue", "bi");
	t_cmp("Bienvenue", "Bi");
	t_cmp("Bi", "Bienvenue");
	t_cmp("Bien", "Biem");
	t_cmp("Bien", "Bien");
	printf("\n\n\n");
}
