/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:10:12 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 19:19:32 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// tester si un caratere est alphanumerique ou non
// tester si un character est alphanumerique ou non
/*
int	main(void)
{
char	test[] = {'A', '1', '5', '7', ' '};
int		num = sizeof(test);

for (int i = 0; i < sizeof(test); i++)
{
printf("%d\n", ft_isalpha(sizeof(test)));
}
}*/