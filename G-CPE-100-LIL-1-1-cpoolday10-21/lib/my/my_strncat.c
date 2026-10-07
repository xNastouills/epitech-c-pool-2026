/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strncat.c
** File description:
** put n caracter to dest from src
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = 0;

    if (nb < 1)
        return dest;
    for (; dest[dest_len] != '\0'; dest_len++);
    if (dest[dest_len] == '\0')
        dest[dest_len] = src[0];
    for (int i = 1; i < nb && src[i] != '\0'; i++) {
        dest[dest_len + i] += src[i];
    }
    return dest;
}
