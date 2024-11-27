/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:53:40 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/27 00:03:57 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t n)
{
	unsigned char	*c;
	unsigned char	value;

	c = (unsigned char *)memoryBlock;
	value = (unsigned char )searchedChar;
	while (n--)
	{
		if (*c == value)
			return ((void *)c);
		c++;
	}
	return (NULL);
}
