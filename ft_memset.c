/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:33:10 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 00:49:48 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*pointer1;
	unsigned char	value1;

	pointer1 = (unsigned char *)pointer;
	value1 = (unsigned char)value;
	while (count--)
	{
		*pointer1++ = value1;
	}
	return (pointer);
}
// permet de remplr une zone memoire idetitifie par son adresse et sa taille
/*
int	main(void)
{
char	str[15];
int		i = 0;

ft_memset(str, "Z", 10);
while (i < 10){
printf ("%c",str[i]);
i++;
}
return (0);
}
*/