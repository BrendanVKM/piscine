/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:34:36 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/09 09:08:00 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
				ft_swap(&tab[j], &tab[i]);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int tab[] = {1, 5, 3, 2, 4};
	int t = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, t);
	for (int i = 0; i < t; i++)
        	printf("%d ", tab[i]);
	printf("\n");
}
*/
