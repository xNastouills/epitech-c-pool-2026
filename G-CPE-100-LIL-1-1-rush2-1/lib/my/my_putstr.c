/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 04 - my_putstr.c
** File description:
** Print a str
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
