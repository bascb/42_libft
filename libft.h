/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:03:51 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/24 20:19:03 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/* Check if char (unsigned) is a letter 
*
* Returns a nonzero if it is a letter, and zero if not
*
*/
int		ft_isalpha(int c);

/* Check if char (unsigned) is a digit 
*
* Returns a nonzero if it is a digit, and zero if not
*
*/
int		ft_isdigit(int c);

/* Check if char (unsigned) is a letter or a digit 
*
* Returns a nonzero if it is and zero if not
*
*/
int		ft_isalnum(int c);

/* Check if char (unsigned) s a 
* 7-bit unsigned char value that fits into 
the ASCII character set. 
*
* Returns a nonzero if it is and zero if not
*
*/
int		ft_isascii(int c);

/* Check if char (unsigned) is printable
*  
*
* Returns a nonzero if it is and zero if not
*
*/
int		ft_isprint(int c);

/* Calculates the length of the string str
*
* Returns the number of chars in thw string
*
*/
size_t	ft_strlen(const char *str);

/* Fills the first n bytes of buffer with c */
void	*ft_memset(void *buffer, int c, size_t n);

/* Erases the data in n bytes of buffer */
void	bzero(void *buffer, size_t n);

#endif