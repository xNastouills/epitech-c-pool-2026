/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strstr.c
** File description:
** Search from a string a string
*/

#include "../../include/my.h"

static int is_alphabetic(char c)
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((i == 0 || !is_alphabetic(str[i - 1])) &&
            (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
    }
    return str;
}
