/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:17:23 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 01:11:03 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	j;
	size_t	i;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
// permet de coller 2 chaine de caratere ensemble
// on alloue de l'espace pour la taille de la premiere et
// deuxieme chaine de caratere
// on lit la chaine de la premiere string
// on colle ensuite la deuxieme chaine a la premiere
/*int main(void)
{
char	*boom = ft_strjoin(s1, s2);

char	*s1 = "bondour "
char	*s2 = "les zamis"
printf ("%s\n, boom")
free (boom);
}
*/