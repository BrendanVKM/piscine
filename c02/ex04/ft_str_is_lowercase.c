/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:25:31 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 09:48:16 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "";

    printf("Result for str1: %d\n", ft_str_is_lowercase(str1));
    printf("Result for str2: %d\n", ft_str_is_lowercase(str2));
    printf("Result for str3: %d\n", ft_str_is_lowercase(str3));

    return 0;
}
*/
