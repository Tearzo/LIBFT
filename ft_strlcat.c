/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:35:50 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/03 23:10:32 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[k])
		k++;
	lendest = k;
	while (src[j] && ((j + k) < (size - 1)))
	{
		dest[k + j] = src[j];
		j++;
	}
	if ((k + j) < size)
		dest[k + j] = '\0';
	if (size <= lendest)
		return (ft_strlen(src) + size);
	return (lendest + ft_strlen(src));
}
// sacre bordel peremet de concaterner une premier chaine a
// une seconde chaine existente dans une taille
// check de la taille sinon on return la source
// on essai de mettre notre destination dan sla source
// si nos deux variable sont inferieur a la taille revoir un char null
// si la taille est inferieur a la len de la variable alors
// revoie la taille de la source
