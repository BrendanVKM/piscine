/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 01:01:52 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/20 02:07:24 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int i = 0;
	int *result = NULL;
	int min = 5;
	int max = 26;
	int size = ft_ultimate_range(&result, min, max);
	if (size == -1)
		printf("error.\n");
	else if (size == 0)
		printf("min >= max.\n");
	else
		printf("size %d:\n", size);
	while (i < size)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return 0;
}
*/
