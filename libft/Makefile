# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frenna <frenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 22:20:11 by ddamaris          #+#    #+#              #
#    Updated: 2019/10/15 14:58:53 by frenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCCFLAGS = -Wall -Wextra -Werror

SRCS= ft_bzero.c ft_putchar.c ft_putstr.c ft_strncat.c ft_strchr.c \
			ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strjoin.c \
			ft_strlen.c ft_strcat.c ft_strncmp.c ft_strncpy.c ft_strnew.c

OBJ=$(SRCS:%.c=%.o)

all:
	gcc  $(GCCFLAGS) -c $(SRCS)
	ar -rv $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all