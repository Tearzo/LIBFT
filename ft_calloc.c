/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:15:35 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 00:50:10 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*pointer;
	size_t	i;

	if (elementSize != 0 && elementCount > ((size_t)-1 / elementSize))
	{
		return (NULL);
	}
	pointer = (void *)malloc(elementCount * elementSize);
	if (!pointer)
	{
		free(pointer);
		return (NULL);
	}
	i = 0;
	while (i < (elementCount * elementSize))
	{
		*(unsigned char *)(pointer + i) = 0;
		i++;
	}
	return (pointer);
}

// alloue un bloc de memoire en initialisant tous ces octets a la valeur 0
// check les overflow
// alloue de la memoire
// free apres un malloc l'allocation de memoire ne devrait pas passer
// mettre a 0 la memoire alloue
/*
int main (void)
{
size_t	nb = 3;
size_t	size = sizeof(int);
int		*tab = ft_calloc(nb, size);
int		i = 0;

if(!tab)
return (1);
while ( i < nb )
{
printf("%d\n", i , tab[i]);
i++;
}
free (tab);
return (0);
}
*/