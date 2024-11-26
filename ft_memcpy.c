/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:14:58 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 06:19:09 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char *dest;
	unsigned char *src;
	size_t i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}