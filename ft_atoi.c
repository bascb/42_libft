/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:34:33 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/28 14:45:49 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Converts the inital part of num_str to int */
int	ft_atoi(char *num_str)
{
	int	i;
	int	result;
	int	signal;

	signal = 1;
	result = 0;
	i = 0;
	while (num_str[i] <= 32)
		i++;
	if (num_str[i] == '-' || num_str[i] == '+')
	{
		if (num_str[i] == '-')
			signal = -1;
		i++;
	}
	while (num_str[i] >= '0' || num_str[i] <= '9')
	{
		result = result * 10 + (num_str[i] - '0');
		i++;
	}
	return (result * signal);
}
