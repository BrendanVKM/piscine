int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sens;
	int	sens_b;
	int	f;

	i = 0;
	sens = 0;
	sens_b = 0;
	f = 0;
	while (i < length - 1)
	{
		sens = f(tab[i], tab[i + 1]);
		if (!f && sens != 0)
		{
			f++;
			sens_b = sens;
		}
		else if (sens != 0 && sens != sens_b)
			return (0);
		i++;
	}
	return (1);
}
