/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-08 18:03:13 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-08 18:03:13 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Devuelve a 1º ocurrancia, ptr. Si no hay NULL.
 * Puede buscar 0.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	car;
	char	*str;

	i = 0;
	car = (char)c;
	str = (char *)s;
	while (*(str + i))
	{
		if (*(str + i) == car)
			return (str + i);
		i++;
	}
	if (car == '\0')
		return (str + i);
	return (NULL);
}
