/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:39:05 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/28 14:24:50 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* locates the first occurence  of s2 in s1 
	returns s2 if s2 exists, NULL if not and
	s1 if n is 0 */
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *) s1);
	if (s2_len > n)
		return (NULL);
	i = 0;
	while (i < n && s1[i])
	{
		if (s1[i] == s2[0])
		{
			if (n - i < s2_len)
				return (NULL);
			if (!ft_strncmp(&s1[i], s2, s2_len))
				return ((char *) &s1[i]);
		}		
		i++;
	}
	return (NULL);
}
