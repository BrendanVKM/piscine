/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:12:00 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/11 21:07:01 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_char_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_alpha(str[i]) || ft_char_is_numeric(str[i])))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		else if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
		{
			str[i + 1] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main() 
{
    char input_string[] = "zsalut ? 42mots quaRanTe-deux; cinquante+et+un";
    
    printf("Befor : %s\n", input_string);

    ft_strcapitalize(input_string);

    printf("After : %s\n", input_string);

    return 0;
}
*/
