
void    t_ft_strlen();
void    t_ft_strcpy();
void    t_ft_strcmp();
void    t_ft_strdup();
void    t_ft_read();
void    t_ft_write();

int	main(void)
{
	printf("\n\n\nStarting Tests \n\n\n");
	printf("---------- [ ft_strlen ] ----------\n\n");
	t_ft_strlen();

	printf("---------- [ ft_strcpy ] ----------\n\n");
	t_ft_strcpy();

	printf("---------- [ ft_strcmp ] ----------\n\n");
	t_ft_strcmp();

	printf("---------- [ ft_strdup ] ----------\n\n");
	t_ft_strdup();

	printf("---------- [ ft_read ] ----------\n\n");
	t_ft_read();

	printf("---------- [ ft_write ] ----------\n\n");
	t_ft_write();
}
