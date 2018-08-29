/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_head.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 14:15:21 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/08/01 21:54:41 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEAD_H
# define BSQ_HEAD_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>
# define SIZE 32
# define ERR_MNV "map error\n"

typedef	struct	s_point
{
	int m;
	int r;
	int c;
}				t_point;
void			ft_v_m(char *map);
void			ft_r_m(char *map_arg);
void			ft_putstr(int fd, char *str);
int				**ft_m_iar(char **arr, int n, char o, int len);
int				ft_atoi(char *str);
char			ft_g_m_c(char *map, int n);
int				ft_val2(char **str, int n);
t_point			ft_it_im(int **matrix);
void			ft_print_map(char **map, t_point max, char c);
char			*ft_g_m_n(char *map);
int				ft_ch_for_end(char *map, int mi);
int				ft_ch_for_nl(char *map, int mi);
#endif
