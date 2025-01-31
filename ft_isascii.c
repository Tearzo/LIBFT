/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:52:15 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 19:19:55 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// tester si un caratere est ascii ou non
// tester si un character est alphanumerique ou non
/*
int	main(void)
{
char	test[] = {'A', '1', '5', '7', ' '};
int		num = sizeof(test);

for (int i = 0; i < sizeof(test); i++)
{
printf("%d\n", ft_isascii(sizeof(test)));
}
}*/