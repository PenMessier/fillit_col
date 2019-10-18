/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:52:58 by ddamaris          #+#    #+#             */
/*   Updated: 2019/10/18 10:58:33 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 547

# include "libft/libft.h"
# include <time.h>
# include <fcntl.h>

# define RED			"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE			"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN			"\033[36m"
# define EOC			"\033[0m"

int		checker(char *bf);
int		ft_exit(void);
int		map_size(char *map);
int		**make_list(char *bf, int n);
int		make_map(int **tt_list, int nb);
void	put_ttrm(char *map, int *ttrm, int ms, char ch);
int		*vld_ttrm(char *buf);
void	print_colors(char	*map);
void	color_tetri(char s);

#endif
