/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:39:37 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 00:55:50 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *src)
{
	char	*c;
	size_t	i;

	i = 0;
	c = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!c)
		return (NULL);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
// a la mamiere d'un strcpy sauf que on alloue
// une zone de memoire pour pouvoir copier la chaine de caratere
// alloue la taille de notre source pui on protege