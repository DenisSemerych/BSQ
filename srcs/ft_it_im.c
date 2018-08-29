/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_it_im.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:38:34 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 22:15:08 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

int			ft_min(int a, int b, int c)
{
	int		min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min);
}

void		ft_free_im(int **matrix)
{
	int i;

	i = 0;
	while (matrix[i] != 0)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix[i]);
}

t_point		ft_mod_rslt(t_point rslt, int m, int i, int j)
{
	if (rslt.m < m)
	{
		rslt.m = m;
		rslt.r = i;
		rslt.c = j;
	}
	return (rslt);
}

t_point		ft_it_im(int **matrix)
{
	int		i;
	int		j;
	t_point	rslt;

	rslt.m = 0;
	rslt.r = 0;
	rslt.c = 0;
	j = 0;
	while (matrix[j] != 0)
	{
		i = 0;
		while (matrix[j][i] != -42)
		{
			if (matrix[j][i] > 0 && (i != 0 && j != 0))
				matrix[j][i] = 1 + ft_min(matrix[j][i - 1], matrix[j - 1][i],
						matrix[j - 1][i - 1]);
			rslt = ft_mod_rslt(rslt, matrix[j][i], i, j);
			i++;
		}
		j++;
	}
	ft_free_im(matrix);
	return (rslt);
}
