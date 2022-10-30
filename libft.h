/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:03:51 by bcastelo          #+#    #+#             */
/*   Updated: 2022/10/28 14:44:44 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>

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

/* check if c is space: space, 
	\f, \n, \r, \t or \v */
int		ft_isspace(int c);

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

/* Returns the uppercase of a lowercase ascii char */
int		ft_toupper(int c);

/* Returns the lowercase of a uppercase ascii char*/
int		ft_tolower(int c);

/* Returns a pointer to the first occurence 
   of char c in string str */
char	*ft_strchr(const char *str, int c);

/* Returns a pointer to the last occurence 
   of char c in string str */
char	*ft_strrchr(const char *str, int c);

/* Compares s1 with s2, comparing only the first (at most)
   n bytes of s1 and s2 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Returns the first occurrence of unsigned char c
   in first n bytes of memory buffer */
void	*ft_memchr(const void *buffer, int c, size_t n);

/* Compares s1 with s2, comparing only the first (at most)
   n bytes of s1 and s2 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* locates the first occurence  of s2 in s1 
	returns s2 if s2 exists, NULL if not and
	s1 if n is 0 */
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

/* Converts the inital part of num_str to int */
int		ft_atoi(char *num_str);

/* Creates a new string with a copy from start to, at most len */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* Join s1 with s2 and returns a pointer to the new string */
char	*ft_strjoin(char const *s1, char const *s2);

#endif
