/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_str_islower.c
** File description:
** print 1 if char is lower
*/

#include "../../include/my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'a' || str[i] > 'z'))
            return 0;
    return 1;
}
