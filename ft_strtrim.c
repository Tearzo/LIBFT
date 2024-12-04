/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:04:53 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 01:09:47 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	coupe(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*couper;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && coupe(s1[start], set))
		start++;
	while (end > start && coupe(s1[end - 1], set))
		end--;
	len = end - start;
	couper = malloc(sizeof(char) * (len + 1));
	if (!couper)
		return (NULL);
	ft_strlcpy(couper, &s1[start], len + 1);
	return (couper);
}
// fonction aui permet de couper une partie d'une chaine par un set
// on cherche au debut de l'index pour savoir ou on s'arrete de couper
// on pars de la fin de l'index pour savoir ou on a commence a couper
// alloue de l'espace pour la chaine couper
// copie de la chaine qui a ete couper
/*
int	main(void)
{
const char	*t = "KAMI YUGIOHHHHHHHH KAMI";
const char	*p = "KAMI";
char		*damn = ft_strtrim(t, p);

printf("%s\n", damn);
free(damn);
return (0);
}
*/