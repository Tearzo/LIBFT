/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavorapa <pavorapa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:16:23 by pavorapa          #+#    #+#             */
/*   Updated: 2024/12/09 11:09:54 by pavorapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static unsigned int	count_word(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*write_word(const char *str, char c)
{
	char			*word;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	word = malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		if (str[i] == c && str[i + 1] == c)
			break ;
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char			**split;
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	x;

	if (str == NULL)
		return (NULL);
	word_count = count_word(str, c);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	x = 0;
	while (str[i] != '\0' && x < word_count)
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		split[x] = write_word(&str[i], c);
		if (split[x] == NULL)
			return (ft_free(split), NULL);
		i = i + ft_strlen(split[x]);
		x++;
	}
	split[x] = 0;
	return (split);
}
// free la mem alloue par la string
// compte le nombre separer par le sep
// alloue la mem pour un mot pour ensuite le copie
// comme un strdup
// cree un tableau de str en separant les mot de la str
// en plusieur str