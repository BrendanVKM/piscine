/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:36:46 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 09:44:11 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	result = 0;
	while (ft_white_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			count++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		result = result * 10 + (str[i++] - '0');
	if (count % 2)
		result *= -1;
	return (result);
}
/*
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
*/
