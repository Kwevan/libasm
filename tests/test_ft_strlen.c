
void t_len(char *s1)
{
	printf("strlen ret   : %zu\n", strlen(s1));
	printf("ft_strlen ret: %zu\n\n", ft_strlen(s1));
}

void	t_ft_strlen()
{
	t_len("");	
	t_len("Salut");
	t_len("dlsfmqldksùflmkqdùflmkqsdlkrngôzrnflkqnfmvverylksdwmlkvsmlkdflkrwjwgmlkjzflkjmldksfjmlskdfmlkwsjdflmksjdflkjlongsdfmlk,snovknwslkdnfsmlknfdlpsknflskndfmlknsdfmlknswmflknswmlkdfnmlwksdnfmstringlkswndfmlkwnsdfmlknsmdlfknswmlkdnfmlkwsndfmlkn");
//	t_len(0); //segfault
	printf("\n");
}
