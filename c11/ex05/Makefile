# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvictoir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 08:25:45 by bvictoir          #+#    #+#              #
#    Updated: 2024/02/28 14:51:08 by bvictoir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= calc.c error.c ft_atoi.c ft_put.c main.c op_valid.c

PRE		= ./srcs/

SRCS	= ${addprefix ${PRE}, ${SRC}}

OBJS	= ${SRCS:.c=.o}

INC		= ./includes/

NAME	= do-op

CC		= cc

RM		= rm -f


CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c -I ${INC} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -I ${INC} -o ${NAME} ${OBJS}		

clean:	
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
