/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strcat.c
** File description:
** return dest cat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = 0;

    for (; dest[dest_len] != '\0'; dest_len++);
    if (dest[dest_len] == '\0')
        dest[dest_len] = src[0];
    for (int i = 1; src[i] != '\0'; i++) {
        dest[dest_len + i] += src[i];
    }
    return dest;
}
