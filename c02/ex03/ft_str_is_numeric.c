/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:18:45 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 09:45:11 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "12345";
    char str2[] = "123abc";
    char str3[] = "";

    printf("Result for str1: %d\n", ft_str_is_numeric(str1));
    printf("Result for str2: %d\n", ft_str_is_numeric(str2));
    printf("Result for str3: %d\n", ft_str_is_numeric(str3));

    return 0;
}
*/
