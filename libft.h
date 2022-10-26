/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:03:51 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/26 19:36:29 by bcastelo         ###   ########.fr       */
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
void	ft_bzero(void *buffer, size_t n);

/* Copies n bytes from src to dest */
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

/* Copies n bytes from src to dest */
void	*ft_memmove(void *dest, const void *src, size_t n);

/* Allocates memory for array of nmemb elements
* of size bytes and set memory to zero */
void	*ft_calloc(size_t nmemb, size_t size);

/* Returns a pointer to a new string,
   duplicated from str */
char	*ft_strdup(const char *str);

/* Copy str to dest in a safe mode */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/* concatenates src to dest in a safe mode */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif