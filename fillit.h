/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:52:58 by ddamaris          #+#    #+#             */
/*   Updated: 2019/10/17 09:51:27 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 547

# include "libft/libft.h"
# include <time.h>

int		checker(char *bf);
int		ft_exit(void);
int		map_size(char *map);
int		**make_list(char *bf, int n);
int		make_map(int **tt_list, int nb);
void	put_ttrm(char *map, int *ttrm, int ms, char ch);
int		*vld_ttrm(char *buf);

#endif
