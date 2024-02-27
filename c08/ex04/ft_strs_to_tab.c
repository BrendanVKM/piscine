/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:43:40 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/24 12:35:09 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = 0;
	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		if (!res[i].copy)
			return (NULL);
		res[i].copy = ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
/*
int	main(int ac, char **av)
{
	t_stock_str	*t;
	t = ft_strs_to_tab(ac, av);
	ft_show_tab(t);
}
*/
