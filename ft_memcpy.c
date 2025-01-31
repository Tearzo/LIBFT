/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 05:14:58 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 18:45:21 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

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
// fonctionne comme un strcpy mais la on copie un bloc de memoire
// de la source vers sa destination
/*int main (void)
{
char	dest[20];

char src []= "RAAAAHHH";
ft_memcpy(dest,src,13);
printf("%s\n", dest);
return (0);
*/