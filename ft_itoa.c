/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:50:15 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/31 14:50:19 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdigit(char *str, char c)
{
	size_t	i;

	i = ft_strlen(str);
	str[i] = c;
}

void	ft_itoa_r(unsigned int n, char *number)
{
	if (n > 9)
		ft_itoa_r(n / 10, number);
	ft_putdigit(number, n % 10 + '0');
}

/* Returns a string representing the integer n */
char	*ft_itoa(int n)
{
	char	*number;

	number = ft_calloc(12, sizeof(char));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		ft_putdigit(number, '-');
		ft_itoa_r(-n, number);
	}
	else
		ft_itoa_r(n, number);
	return (number);
}
