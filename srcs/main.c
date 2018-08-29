/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 23:35:28 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 21:53:02 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"

int			ft_count_length(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
		i++;
	if (i < 4)
	{
		ft_putstr(2, ERR_MNV);
		return (0);
	}
	else
		return (1);
}

void		ft_read_input(void)
{
	char	*str;
	char	c;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char *));
	while (read(0, &c, 1) > 0)
	{
		str[i] = (char)malloc(sizeof(char));
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	if (ft_count_length(str))
		ft_v_m(str);
}

int			main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		ft_read_input();
	}
	else
	{
		while (i < argc)
		{
			ft_r_m(argv[i]);
			if (i < (argc - 1))
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
