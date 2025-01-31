/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:17:02 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 19:20:10 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// tester si un caratere est imprimable ou non
// tester si un character est alphanumerique ou non
/*
int	main(void)
{
char	test[] = {'A', '1', '5', '7', ' '};
int		num = sizeof(test);

for (int i = 0; i < sizeof(test); i++)
{
printf("%d\n", ft_isprint(sizeof(test)));
}
}*/