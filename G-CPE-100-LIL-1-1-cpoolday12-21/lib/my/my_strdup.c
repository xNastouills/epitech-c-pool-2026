/*
** EPITECH PROJECT, 2026
** my_strdup.c
** File description:
** my_lib
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int len = 0;
    int i = 0;

    if (src == 0)
        return (0);
    while (src[len] != '\0')
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    if (dest == 0)
        return (0);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
