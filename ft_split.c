/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:03:26 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-02 09:03:26 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // ELIMINAR

/*Contamos el número de PLBs, para el tam del array*/
static int	count_words(char const *s, char c)
{
	int	i;
	int	words;
	int	control;

	i = 0;
	words = 0;
	control = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			control = 0;
		}
		else if (control == 0)
		{
			control++;
			words++;
		}
		i++;
	}
	return (words);
}

static void	aux_split(char const *s, char c, char **strings)
{
	int	i;
	int	j;

	i = 0;
}

/*Devuelve un array de strings, separado por el delimitador*/
char	**ft_split(char const *s, char c)
{
	char	**strings;

	strings = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	aux_split(s, c, strings);
	return (strings);
}
