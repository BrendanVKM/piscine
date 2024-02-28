/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:23:17 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 15:00:47 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;
	int	sens_b;
	int	f;

	i = 0;
	sens = 0;
	sens_b = 0;
	f = 0;
	while (i < length - 1)
	{
		sens = f(tab[i], tab[i + 1]);
		if (!f && sens != 0)
		{
			f++;
			sens_b = sens;
		}
		else if (sens != 0 && sens != sens_b)
			return (0);
		i++;
	}
	return (1);
}
