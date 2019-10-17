# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frenna <frenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 22:20:11 by frenna            #+#    #+#              #
#    Updated: 2019/10/17 10:37:42 by frenna           ###   ########.fr        #
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
	@echo "\033[1m\033[32mCompiled : \033[0m" $(NAME)

$(LIB):
	@make -C $(LIB_PATH)
	@echo "\033[1m\033[32mCompiled : \033[0m" $(LIB)

clean:
	rm -f *.o
	@make -C $(LIB_PATH) clean
	@echo "\033[33mCleaned :" $(NAME) $(LIB)

fclean: clean
	rm -f $(NAME)
	@make -C $(LIB_PATH) fclean
	@echo "\033[33mDeleted :" $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
