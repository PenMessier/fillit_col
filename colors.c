/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:41:23 by frenna            #+#    #+#             */
/*   Updated: 2019/10/18 11:00:51 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	color_tetri(char s)
{
	if (s == 'A')
		ft_putstr(RED);
	if (s == 'B')
		ft_putstr(GREEN);
	if (s == 'C')
		ft_putstr(YELLOW);
	if (s == 'D')
		ft_putstr(BLUE);
	if (s == 'E')
		ft_putstr(MAGENTA);
	if (s == 'F')
		ft_putstr(CYAN);
}

void	print_colors(char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (map[i] >= 'A' && map[i] <= 'F')
		{
			color_tetri(map[i]);
			ft_putchar(map[i]);
			ft_putstr(EOC);
		}
		else
			ft_putchar(map[i]);
		i++;
	}
}
