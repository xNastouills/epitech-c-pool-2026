/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_str_isnum.c
** File description:
** print 1 if char is numeric
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < '0' || str[i] > '9'))
            return 0;
    return 1;
}
