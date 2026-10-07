/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strlowcase.c
** File description:
** Search from a string a string
*/

#include "../../include/my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}
