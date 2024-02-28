/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:23:17 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 17:29:48 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;
	int	sens_b;
	int	fu;

	i = 0;
	sens = 0;
	sens_b = 0;
	fu = 0;
	while (i < length - 1)
	{
		sens = f(tab[i], tab[i + 1]);
		if (!fu && sens != 0)
		{
			fu++;
			sens_b = sens;
		}
		else if (sens != 0 && sens != sens_b)
			return (0);
		i++;
	}
	return (1);
}
