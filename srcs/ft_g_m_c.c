/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_m_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:53:01 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 21:36:40 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

char		ft_g_m_c(char *map, int n)
{
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (map[i - n]);
}

char		*ft_g_m_n(char *map)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char *));
	while (map[i] != '\n')
		i++;
	while (j < (i - 3))
	{
		str[j] = map[j];
		if (str[j] < 48 || str[j] > 57)
			return ("bad");
		j++;
	}
	str[j] = '\0';
	return (str);
}

int			ft_strlen(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

int			ft_val2(char **str, int n)
{
	int		len;
	int		i;
	int		count;

	i = 0;
	count = 0;
	len = ft_strlen(str[i]);
	while (str[i] != 0)
	{
		if (len != ft_strlen(str[i]))
		{
			ft_putstr(2, ERR_MNV);
			return (0);
		}
		count++;
		i++;
	}
	if (count != n)
	{
		ft_putstr(2, ERR_MNV);
		return (0);
	}
	return (1);
}
