/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:01:24 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 05:19:13 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	*ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;

	pointer1 = (unsigned char *)str1;
	pointer2 = (unsigned char *)str2;
	while (size--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
