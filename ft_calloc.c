/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:15:35 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 06:34:04 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t elementCount, size_t elementSize)
{
	void *pointer;
	size_t i;

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