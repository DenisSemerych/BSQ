/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:13:07 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 21:24:59 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

int			ft_ch_for_end(char *map, int mi)
{
	if (map[mi] == '\0')
	{
		ft_putstr(2, ERR_MNV);
		return (1);
	}
	return (0);
}

int			ft_ch_for_nl(char *map, int mi)
{
	if (map[mi] != '\n')
	{
		ft_putstr(2, ERR_MNV);
		return (1);
	}
	return (0);
}

void		ft_r_m(char *map_arg)
{
	int		fd;
	int		rd;
	char	buff[SIZE + 1];
	int		count;
	char	*map;

	count = 1;
	fd = open(map_arg, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, ERR_MNV);
		return ;
	}
	else
	{
		while ((rd = read(fd, buff, SIZE)))
			count++;
		map = (char *)malloc(sizeof(char) * (count * SIZE) + 1);
		fd = open(map_arg, O_RDONLY);
		rd = read(fd, map, (count * SIZE));
		map[rd] = '\0';
		ft_v_m(map);
		close(fd);
	}
}
