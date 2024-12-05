/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pol <pol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 05:38:12 by pol               #+#    #+#             */
/*   Updated: 2024/12/05 06:27:00 by pol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

// Free the memory allocated for the array of strings
static void ft_free(char **split) {
    int i;
    i = 0;
    while (split[i]) {
        free(split[i]);
        i++;
    }
    free(split);
}

// Count the number of words separated by the delimiter
static int count_words(const char *str, char c) {
    int count;
    int in;
    int i;

    count = 0;
    in = 0;
    i = 0;
    while (str[i]) {
        if (str[i] != c && !in) {
            count++;
            in = 1;
        } else if (str[i] == c) {
            in = 0;
        }
        i++;
    }
    return count;
}

// Allocate memory for a word and copy it from the input string
static char *write(const char *str, char c) {
    int len;
    int i;
    char *word;

    len = 0;
    while (str[len] && str[len] != c) {
        len++;
    }

    word = malloc(len + 1);
    if (!word) {
        return NULL;
    }

    i = 0;
    while (i < len) {
        word[i] = str[i];
        i++;
    }
    word[len] = '\0';
    return word;
}

// Create an array of strings by splitting the input string
char **ft_split(const char *str, char c) {
    int word_count;
    char **split;
    int i;
    int x;

    if (!str) {
        return NULL;
    }

    word_count = count_words(str, c);
    split = malloc((word_count + 1) * sizeof(char *));
    if (!split) {
        return NULL;
    }

    i = 0;
    x = 0;
    while (str[i] && x < word_count) {
        while (str[i] && str[i] == c) {
            i++;
        }

        if (str[i]) {
            split[x] = write_word(&str[i], c);
            if (!split[x]) {
                ft_free(split);
                return NULL;
            }
            while (str[i] && str[i] != c) {
                i++;
            }
            x++;
        }
    }

    split[x] = NULL;
    return split;
}
