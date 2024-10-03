/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-25 08:45:24 by evillca-          #+#    #+#             */
/*   Updated: 2024-09-25 08:45:24 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
/*void *ft_memmove(void *dest, const void *src, size_t n);*/


int 	ft_toupper(int c);
int 	ft_tolower(int c);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

/*char	**ft_split(char const *s, char c);*/

#endif