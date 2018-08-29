/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_v_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:07:41 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 22:16:02 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

char		**ft_split(char *map, int mi, char **back, int len)
{
	char	*tmp;
	int		j;
	int		ch;
	int		k;

	k = 0;
	while (map[mi] != '\0')
	{
		j = 0;
		ch = 0;
		tmp = (char *)malloc(sizeof(char) * len + 1);
		while (map[mi] != '\n')
		{
			tmp[j++] = map[mi++];
			ch = 1;
		}
		if (ch == 1)
		{
			tmp[j] = '\0';
			back[k++] = tmp;
		}
		mi++;
	}
	back[k] = 0;
	return (back);
}

char		**ft_m_as(char *map, int mi, int n, int len)
{
	char	**back;

	back = (char **)malloc(sizeof(char *) * n + 1);
	if (back != NULL)
		back = ft_split(map, mi, back, len);
	return (back);
}

int			ft_c_sl(char *str, int mi)
{
	int		len;

	len = 0;
	mi++;
	while (str[mi] != '\n')
	{
		len++;
		mi++;
	}
	return (len);
}

int			ft_val(char *map)
{
	int		i;
	char	prev;

	i = 0;
	while (map[i] != '\n')
		i++;
	if (ft_ch_for_end(map, i + 1))
		return (0);
	while (map[i] != '\0')
	{
		if ((map[i] != ft_g_m_c(map, 3) && map[i] != ft_g_m_c(map, 2) &&
             map[i] != ft_g_m_c(map, 1) && map[i] != '\n')
				|| (prev == '\n' && map[i] == '\n'))
		{
			prev = '0';
			ft_putstr(2, ERR_MNV);
			return (0);
		}
		prev = map[i];
		i++;
	}
	if (ft_ch_for_nl(map, i - 1))
		return (0);
	return (1);
}

void		ft_v_m(char *map)
{
	int		n;
	int		i;
	char	**back;
	int		**matrix;
	t_point	max;

	i = 0;
	if (ft_val(map))
	{
		n = ft_atoi(ft_g_m_n(map));
		if (n <= 0)
		{
			ft_putstr(2, ERR_MNV);
			return ;
		}
		while (map[i] != '\n')
			i++;
		back = ft_m_as(map, i, n, ft_c_sl(map, i));
		if (ft_val2(back, n))
		{
			matrix = ft_m_iar(back, n, ft_g_m_c(map, 2), ft_c_sl(map, i));
			max = ft_it_im(matrix);
			ft_print_map(back, max, ft_g_m_c(map, 1));
		}
	}
}
