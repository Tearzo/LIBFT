/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   *
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pol <pol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 06:24:05 by pol               #+#    #+#             */
/*   Updated: 2024/12/05 06:31:14 by pol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
static size_t count_size(long nb)
{
    size_t size = 1; // Start with 1 to account for the first digit or sign
    if (nb < 0)
    {
        nb = -nb;  // Convert to positive if negative
        size++;    // Increase size for the negative sign
    }
    while (nb >= 10)
    {
        nb = nb / 10;
        size++;
    }
    return size;
}


char *ft_itoa(int n)
{
    size_t size;
    long nb;
    char *str;

    nb = (long)n;
    size = count_size(nb);

    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return NULL;

    str[size] = '\0';

    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;  // Convert to positive after handling the negative sign
    }

    // Convert the number into the string (from the last digit to the first)
    while (size > (nb < 0))
    {
        str[--size] = (nb % 10) + '0';
        nb = nb / 10;
    }

    return str;
}
