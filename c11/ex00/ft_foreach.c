#include <libft.h>
#include <stdio.h>
/*
void printt(int x)
{
	printf("%d\n", x);
}
*/
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
int main(void)
{
	int a[] = {41, 4, 5, 8784, 21, 7};
	int *x = a;
	ft_foreach(x, 6, printt);
	return 0;
}
*/
