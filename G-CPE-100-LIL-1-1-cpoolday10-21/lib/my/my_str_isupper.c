/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_str_isupper.c
** File description:
** print 1 if char is numeric
*/

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'A' || str[i] > 'Z'))
            return 0;
    return 1;
}
