/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsemeryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:02:05 by dsemeryc          #+#    #+#             */
/*   Updated: 2018/07/24 17:00:30 by dsemeryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int num;
	int counter;

	num = 1;
	counter = 0;
	result = 0;
	while (str[counter] <= 32)
		counter++;
	if (str[counter] == '-')
	{
		num = -num;
		counter++;
	}
	else if (str[counter] == '+')
		counter++;
	while (str[counter] >= 48 && str[counter] <= 57)
	{
		result = (result * 10) + (str[counter] - 48);
		counter++;
	}
	return (result * num);
}
