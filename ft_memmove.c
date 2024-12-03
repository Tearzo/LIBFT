/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:15:13 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/03 21:42:00 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!dest && !src)
		return (NULL);
	if (size <= 0)
		return (destination);
	if (dest > src)
		while (size--)
			dest[size] = src[size];
	else
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}
// fonction comme un memcpy a l'exception aue les 2 zone de memoires
// peuvent se chevaucher
// si ya rien on renvoi NULL
// si la taille est inferieur a 0 renvoie la destination
// execute le memcpy