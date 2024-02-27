/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:02:46 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/15 19:02:56 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5,3));
        printf("%d\n", ft_recursive_power(-5,3));
        printf("%d\n", ft_recursive_power(0,0));
        printf("%d\n", ft_recursive_power(1,100));
	printf("%d\n", ft_recursive_power(5,-5));
	return (0);
}
*/
