/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_str_isalpha.c
** File description:
** print 1 if char is alphabetic
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'a' || str[i] > 'z') &&
            (str[i] < 'A' || str[i] > 'Z'))
            return 0;
    return 1;
}
