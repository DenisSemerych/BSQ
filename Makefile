# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/01 19:40:14 by dsemeryc          #+#    #+#              #
#    Updated: 2018/08/01 22:06:34 by dsemeryc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: 
	gcc -Wall -Wextra -Werror ./srcs/ft_atoi.c ./srcs/ft_g_m_c.c ./srcs/ft_it_im.c ./srcs/ft_m_iar.c ./srcs/ft_p_m.c ./srcs/ft_putstr.c ./srcs/ft_r_m.c ./srcs/ft_v_m.c ./srcs/main.c -I ./includes/ -o bsq

clean:
	rm -f ./srcs/*.o

fclean: clean
	rm -f bsq

re: fclean all

