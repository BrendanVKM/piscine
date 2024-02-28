/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:49:04 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 14:57:57 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	int	op;
	int	x;
	int	y;

	op = op_valid(av[2]);
	x = ft_atoi(av[1]);
	y = ft_atoi(av[3]);
	if (ac != 4)
		return (0);
	if (error(op, y))
		return (0);
	ft_putnbr(calc(x, op, y));
	ft_putchar('\n');
	return (0);
}
