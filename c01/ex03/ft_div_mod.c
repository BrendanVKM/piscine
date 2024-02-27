/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:28:34 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/09 09:06:53 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a,
	    b,
	    div,
	    mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("q = %d, r = %d\n", div, mod);
}
*/
