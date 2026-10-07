/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strncmp.c
** File description:
** Search from a string a string
*/

#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n <= 0)
        return 0;
    while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
