/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:01:24 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 18:41:32 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)pointer1;
	str2 = (unsigned char *)pointer2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
// fonction comme un strcmp sauf que la on compare deux bloc de memoire
/*
int	main(void)
{
char	s1[] = "HOLAAAAAA";
char	s2[] = "HOLAAAAAA";
size_t	len = sizeof(s1);

int * boom = ft_memcmp(s1, s2 ,len);
printf("d/n", boom);
return (0);
}
*/