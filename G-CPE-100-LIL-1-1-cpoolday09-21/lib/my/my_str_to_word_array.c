/*
** EPITECH PROJECT, 2026
** my_str_to_word_array.c
** File description:
** my_lib
*/

#include <stdlib.h>

static int alnum(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'));
}

static int count_words(char const *str)
{
    int n = 0;

    for (int i = 0; str[i]; i++)
        if (alnum(str[i]) && (i == 0 || !alnum(str[i - 1])))
            n++;
    return n;
}

static char *get_word(char const *str, int *i)
{
    int start = *i;
    int len = 0;
    char *word;

    while (str[*i] && alnum(str[*i])) {
        (*i)++;
        len++;
    }
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    for (int j = 0; j < len; j++)
        word[j] = str[start + j];
    word[len] = '\0';
    return word;
}

static int add_word(char **tab, char const *str, int *i, int *j)
{
    tab[*j] = get_word(str, i);
    if (!tab[*j])
        return 0;
    (*j)++;
    return 1;
}

char **my_str_to_word_array(char const *str)
{
    int n = count_words(str);
    int i = 0;
    int j = 0;
    char **tab = malloc(sizeof(char *) * (n + 1));

    if (!tab)
        return NULL;
    while (str[i]) {
        while (str[i] && !alnum(str[i]))
            i++;
        if (str[i] && !add_word(tab, str, &i, &j))
            return NULL;
    }
    tab[j] = NULL;
    return tab;
}
