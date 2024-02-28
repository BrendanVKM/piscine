/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:43:19 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 09:43:29 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	calc(int x, int op, int y)
{

	if (op == 0)
		return (x + y);
	if (op == 1)
		return (x - y);
	if (op == 2)
		return (x / y);
	if (op == 3)
		return (x * y);
	if (op == 4)
		return (x % y);
	return (0);
}