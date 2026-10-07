/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 04 - my_strlen.c
** File description:
** Print a str len
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int strlen = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        strlen += 1;
    }
    return strlen;
}
