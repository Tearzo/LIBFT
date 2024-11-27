/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:57:06 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/27 00:12:41 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while ((c[i] >= 9 && c[i] <= 13 && c[i]) || c[i] == 32)
		i++;
	if (c[i] == 43 || c[i] == 45)
	{
		if (c[i] == 45)
			sign = -sign;
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9' && c[i])
	{
		result = result * 10 + c[i] - '0';
		i++;
	}
	return (result * sign);
}
