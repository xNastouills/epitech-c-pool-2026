/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 06 - my_strstr.c
** File description:
** Search from a string a string
*/

#include <string.h>
#include "../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
        return str;
    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0') {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
        i++;
    }
    return NULL;
}
