/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strncpy.c
** File description:
** Copy n str from another
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    return dest;
}
