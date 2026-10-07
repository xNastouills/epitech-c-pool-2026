/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strcmp.c
** File description:
** Search from a string a string
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return s1[i] - s2[i];
}
