/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:22:04 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 17:20:16 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void printt(int x)
{
	printf("%d\n", x);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
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
