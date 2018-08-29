/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_as.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 20:42:57 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 21:34:14 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

int		**ft_m_iar(char **arr, int n, char o, int len)
{
	int		**matrix;
	int		*tmp;
	int		i;
	int		m;

	m = 0;
	matrix = (int **)malloc(sizeof(int *) * n + 1);
	while (arr[m] != 0)
	{
		i = 0;
		tmp = (int *)malloc(sizeof(int *) * len + 1);
		while (arr[m][i] != '\0')
		{
			if (arr[m][i] == o)
				tmp[i++] = 0;
			else
				tmp[i++] = 1;
		}
		tmp[i] = -42;
		matrix[m] = tmp;
		m++;
	}
	matrix[m] = 0;
	return (matrix);
}
