/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:22:57 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 15:24:15 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*
int	multi(int x)
{
	return (x * 5);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int a[] = { 4, 8, 2, 1, 20};
	int *tab = a;
	tab = ft_map(tab, 5, multi);
	for (int i = 0; i < 5; i++)
		printf("%d\n", tab[i]);
	return (0);
}
*/
