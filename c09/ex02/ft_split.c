/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 08:36:38 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/27 08:19:34 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && !is_sep(str[i], sep))
			i++;
		while (str[i] && is_sep(str[i], sep))
			i++;
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *str, char *sep, char *split)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		i++;
		len++;
	}
	split = (char *)malloc(sizeof(char) * (len + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < len)
	{
		split[i] = str[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		return (NULL);
	while (str[i] && j < count_words(str, charset))
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			split[j] = ft_strcpy(&str[i], charset, split[j]);
			i += ft_strlen(split[j]);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**split;

	if (ac != 3)
		return (0);
	i = 0;
	split = NULL;
	split = ft_split(av[1], av[2]);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
*/
