/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:04:34 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 18:34:28 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

// permet d'ecrire des octets de valeur zero dans un bloc d'octet pointer par s
/*
int	main(void)
{
int		i = 0;

char tab[15]= "welekip";
printf("%s\n", tab);
ft_bzero(tab, sizeof(tab));
while (i < sizeof(tab))
{
printf(%d\n, tab[i])
i++;
}
}
*/