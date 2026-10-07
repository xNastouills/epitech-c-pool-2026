/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_revstr.c
** File description:
** Copy n str from another
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

char *my_revstr(char *str)
{
    char temp;
    int length = my_strlen(str);
    int left = 0;
    int right = length - 1;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left = left + 1;
        right = right - 1;
    }
    return str;
}
