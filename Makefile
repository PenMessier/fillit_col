# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frenna <frenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 22:20:11 by frenna            #+#    #+#              #
#    Updated: 2019/10/16 14:52:28 by frenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = libft/libft.a make_map.c vld_ttrm.c fillit.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f *.o
	rm -f $(NAME)

re: fclean all