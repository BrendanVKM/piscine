int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i][0] != '\0')
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
