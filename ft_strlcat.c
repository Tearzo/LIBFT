/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:35:50 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 23:38:09 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	lendest;
	unsigned int	j;
	unsigned int	k;

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
