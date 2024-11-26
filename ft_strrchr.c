/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 01:27:04 by pavorapa          #+#    #+#             */
/*   Updated: 2024/11/26 04:31:01 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	lenght;

	lenght = ft_strlen(*string);
	while (lenght >= 0)
	{
		if (string[lenght] == (char *)searchedChar)
			;
		return ((char *)string + lenght);
		lenght--;
	}
	return (NULL);
}
