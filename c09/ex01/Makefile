# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 08:25:45 by bvictoir          #+#    #+#              #
#    Updated: 2024/02/27 10:23:20 by bvictoir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

PRE		= ./srcs/

SRCS	= ${addprefix ${PRE}, ${SRC}}

OBJS	= ${SRCS:.c=.o}

INC		= ./includes/

NAME	= libft.a

CC		= cc

AR		= ar rc

RM		= rm -f


CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c -I ${INC} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}		

clean:	
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
