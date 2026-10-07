/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 08 - my_str_to_word_array.c
** File description:
** splits a string into words
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

static int is_alphabetic(char c)
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

static int get_word_len(char const *str)
{
    int len = 0;

    while (str[len] != '\0' && is_alphabetic(str[len]))
        len++;
    return len;
}

static int count_words(char const *str)
{
    int words = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphabetic(str[i]) && in_word == 0) {
            in_word = 1;
            words++;
        } else {
            in_word = 0;
        }
    }
    return words;
}

static char *extract_word(char const *str)
{
    int len = get_word_len(str);
    char *word = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++)
        word[i] = str[i];
    word[len + 1] = '\0';
    return word;
}

char **my_str_to_word_array(char const *str)
{
    char **tab = malloc(sizeof(char *) * (count_words(str) + 1));
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alphabetic(str[i])) {
            tab[k] = extract_word(&str[i]);
            i += get_word_len(&str[i]) - 1;
            k++;
        }
    }
    tab[k] = NULL;
    return tab;
}
