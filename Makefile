# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frenna <frenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 22:20:11 by frenna            #+#    #+#              #
#    Updated: 2019/10/17 10:21:08 by frenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = $(LIB_PATH)$(LIB) make_map.c vld_ttrm.c fillit.c
FLAGS = -Wall -Wextra -Werror
LIB = libft.a
LIB_PATH = libft/

all: $(NAME)

$(NAME): $(LIB)
	gcc $(FLAGS) $(SRCS) -o $(NAME)

$(LIB):
	@make -C $(LIB_PATH)

clean:
	rm -f *.o
	@make -C $(LIB_PATH) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIB_PATH) fclean

re: fclean all