/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvkm <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 21:50:02 by bvkm              #+#    #+#             */
/*   Updated: 2024/02/29 22:29:02 by bvkm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_sep(char c)
{
	char *set;
	int	i;

	set = " \t\n";
	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

int	ft_strlen(char *str, int x)
{
	while (str[x] && !is_sep(str[x]))
		x++;
	return (x);
}

void	ft_strncpy(char *dest, char *src, int x, int n)
{
	int	i;

	i = 0;
	while (src[x] && x < n)
		dest[i++] = src[x++];
	dest[i] = '\0';
}

int	count_words(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i] && !is_sep(str[i]))
			count++;
		while (str[i] && !is_sep(str[i]))
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	word;
	char	**strs;
	
	i = 0;
	word = 0;
	if (!(strs = malloc(sizeof(char *) * (count_words(str) + 1))))
		return (NULL);	
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		j = i;
		while (str[j] && !is_sep(str[j]))
			j++;
		if (j != i)
		{
			if (!(strs[word] = malloc(sizeof(char) * j - i + 1)))
				return (NULL);
			ft_strncpy(strs[word++], str, i, j);
		}
		i = j;
	}
	strs[word] = NULL;
	return (strs);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char	**strs;
	int	i;
	/*
	(void) ac;
	(void) av;
	*/
	strs = ft_split(av[1]/*" a b c d \n e f \t g h "*/);
	i = 0;
	while (strs[i])
		printf("%s\n", strs[i++]);
	return (0);
}
