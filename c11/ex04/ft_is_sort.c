/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:23:17 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/29 16:35:17 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_asc(tab, length, f) || ft_is_desc(tab, length, f))
		return (1);
	return (0);
}
/*
int	ft_test(int a, int b)
{
	return (a - b);
}

#include <stdio.h>

int	main()
{
	int	tab[5] = {5, 3, 2, 2, 1};
	printf("%s\n", ft_is_sort(tab, 5, &ft_test) ? "True" : "False");
}
*/
