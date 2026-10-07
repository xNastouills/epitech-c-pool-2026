/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strcpy.c
** File description:
** Copy str from another
*/

#include <unistd.h>
#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
