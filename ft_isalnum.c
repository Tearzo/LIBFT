/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:35:52 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/04 18:34:30 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	else
		return (0);
}
// tester si un character est alphanumerique ou non
/*
int	main(void)
{
char	test[] = {'A', '1', '5', '7', ' '};
int		num = sizeof(test);

for (int i = 0; i < sizeof(test); i++)
{
printf("%d\n", ft_isalnum(sizeof(test)));
}
}*/