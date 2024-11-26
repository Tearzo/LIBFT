/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:57:06 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 05:26:21 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *c)
{
	int	result;
	int	sign;
	int	i;

	while (c[i] >= 9 && c[i] <= 13 && c[i])
		i++;
	while (c[i] == 43 || c[i] == 45)
	{
		if (c[i] == 45)
			sign = -sign;
	}
	i++;
	while (c[i] >= '0' && c[i] <= '9' && c[i])
		result = result * 10 + sign;
	i++;
	return (result);
}
