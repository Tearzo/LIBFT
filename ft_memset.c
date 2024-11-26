/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:33:10 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 02:24:40 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*pointer1;
	unsigned char	*value1;

	pointer1 = (unsigned char *)pointer;
	value1 = (unsigned char *)value;
	while (count--)
	{
		*pointer1++ = value1;
	}
	return (value);
}
