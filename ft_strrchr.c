/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-08 17:36:01 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-08 17:36:01 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Comienza desde el final a buscar la coincidencia, ptr. NULL si no hay.*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
