/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:29:52 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 09:48:01 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "";

    printf("Result for str1: %d\n", ft_str_is_uppercase(str1));
    printf("Result for str2: %d\n", ft_str_is_uppercase(str2));
    printf("Result for str3: %d\n", ft_str_is_uppercase(str3));

    return 0;
}
*/
