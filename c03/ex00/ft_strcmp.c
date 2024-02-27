/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:55:21 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 21:11:12 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Universe!";
    
    int result = ft_strcmp(str1, str2);

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
