/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:01:26 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/09 09:47:38 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if (string[i] == (char)searchedChar)
		return ((char *)&string[i]);
	return (NULL);
}
// cherche le caractere sur
// la chaine de caratere puis renvoie le reste de la chaine
/*
#include <stdio.h>

int	main(void)
{
int		c = 't';
char	*ff = ft_strchr(str, c);

char *str= "gateautropbon";
printf("%ld\n", ff - str);
}
*/