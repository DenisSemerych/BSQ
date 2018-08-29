/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:15:37 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 18:22:28 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

void	ft_free_as(char **map)
{
	int i;

	i = 0;
	while (map[i] != 0)
	{
		free(map[i]);
		i++;
	}
	free(map[i]);
}

void	ft_print_map(char **map, t_point max, char fc)
{
	int	r;
	int c;

	c = 0;
	while (map[c] != 0)
	{
		r = 0;
		while (map[c][r] != '\0')
		{
			if ((c <= max.c && c > (max.c - max.m)) &&
					(r > (max.r - max.m) && r <= max.r))
				write(1, &fc, 1);
			else
				write(1, &map[c][r], 1);
			r++;
		}
		write(1, "\n", 1);
		c++;
	}
	ft_free_as(map);
}
