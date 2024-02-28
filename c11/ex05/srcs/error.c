/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:07:22 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 14:36:32 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	error(int op, int y)
{
	if (op < 0)
	{
		ft_putstr("0\n");
		return (-1);
	}
	if (op == 2 && !y)
	{
		ft_putstr("Stop : division by zero\n");
		return (-1);
	}
	if (op == 4 && !y)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (-1);
	}
	return (0);
}
