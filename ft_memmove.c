/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:26:33 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/26 11:41:40 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies n bytes from src to dest */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*array;
	char	*s;
	char	*d;

	array = ft_calloc(n, sizeof(char));
	if (!array)
		return (dest);
	i = 0;
	s = (char *) src;
	while (i < n)
	{
		array[i] = s[i];
		i++;
	}
	i = 0;
	d = (char *) dest;
	while (i < n)
	{
		d[i] = array[i];
		i++;
	}
	free(array);
	return (dest);
}
