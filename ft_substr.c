/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:24:31 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/03 21:42:18 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	if (start >= end)
		return (ft_strdup(""));
	if (start + len >= end)
		len = end - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// permet de print uen chaine de caratere selon le debut et la taille donne
// gerer les NULL
// alloue de la memoire pour une chaine vide
// adjuster le taille de la chaine
// alloue de la memoire pour la sous chaine
// strlcpy modifier