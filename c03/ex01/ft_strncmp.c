/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:37:38 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 21:42:26 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Universe!";
    int	i = 10;


    int result = strncmp(str1, str2, i);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    if (result < 0)
    {
        printf("str1 is less than str2\n");
    } 
    else if (result > 0)
    {
        printf("str1 is greater than str2\n");
    } 
    else
    {
        printf("str1 is equal to str2\n");
    }

    return 0;
}
*/
