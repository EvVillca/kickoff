/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:07:21 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-02 09:07:21 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Mem dinámica.
 *numElem * size => inicializado a 0
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	int		tam;

	tam = nmemb * size;
	mem = malloc (tam);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, tam);
	return (mem);
}
