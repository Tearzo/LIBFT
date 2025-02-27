/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:37:57 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 19:05:31 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
// compare 2 chaine de charactere au n caracter donne par la taille 
/*
int	main(void)
{
char	s1[] = "HOLAAAAAA";
char	s2[] = "HOLAAAAAA";
size_t	len= sizeof(s1);

int *boom = ft_strncmp(s1, s2, len); 
printf("%d\n", boom);
return (0);
}
*/