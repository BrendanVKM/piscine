/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:44:47 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 09:49:21 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
	char str1[] = "Hello!";
	char str2[] = "Hello\nWorld";
    	char str3[] = "";

    	printf("Result for str1: %d\n", ft_str_is_printable(str1));
    	printf("Result for str2: %d\n", ft_str_is_printable(str2));
    	printf("Result for str3: %d\n", ft_str_is_printable(str3));

	return 0;
}
*/
