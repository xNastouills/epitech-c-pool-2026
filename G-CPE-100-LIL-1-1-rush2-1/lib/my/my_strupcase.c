/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strstr.c
** File description:
** Search from a string a string
*/

#include "../../include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}
