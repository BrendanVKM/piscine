/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:38:51 by bvictoir          #+#    #+#             */
/*   Updated: 2024/02/28 15:00:14 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		op_valid(char *op);
int		ft_atoi(char *str);
int		error(int op, int y);
int		calc(int x, int op, int y);

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
