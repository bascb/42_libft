/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:31:08 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/30 11:31:24 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creates a new string with a copy from start to, at most len */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	new_len;

	if ((size_t) start >= ft_strlen(s))
		new_len = 1;
	else
		new_len = len + 1;
	new = malloc(new_len * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s[start], new_len);
	return (new);
}
