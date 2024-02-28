/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:49:04 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 10:28:27 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	if (ac != 4)
			return (0);
	int	op;

	op = op_valid(av[2]);
	if (op < 0)
	{
		ft_putstr("0\n");
		return (0);
	}
	int	x;
	int	y;

	x = ft_atoi(av[1]);
	y = ft_atoi(av[3]);
	if (op == 2 && !y)
	{
			ft_putstr("Stop : division by zero\n");
			return (0);
	}
	if (op == 4 && !y)
	{
		ft_putstr("Stop : modulo by zero\n");
			return (0);
	}
	ft_putnbr(calc(x, op, y));
	ft_putchar('\n');
	return (0);
}
