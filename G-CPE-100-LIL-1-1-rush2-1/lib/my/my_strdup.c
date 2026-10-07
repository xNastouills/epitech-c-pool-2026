/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 08 - my_strdup.c
** File description:
** Allocate memory
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int len;
    char *dest;

    if (src == NULL)
        return NULL;
    len = my_strlen(src);
    dest = malloc(sizeof(char) * (len + 1));
    my_strcpy(dest, src);
    return dest;
}
