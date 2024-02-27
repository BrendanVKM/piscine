/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:00:25 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/15 19:00:58 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5,3));
        printf("%d\n", ft_iterative_power(-5,3));
        printf("%d\n", ft_iterative_power(0,0));
        printf("%d\n", ft_iterative_power(1,100));
	printf("%d\n", ft_iterative_power(5,-5));
	return (0);
}
*/
