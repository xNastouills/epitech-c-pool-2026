/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 08 - concat_params.c
** File description:
** concat params from main
*/

#include "../../include/my.h"
#include <stdlib.h>

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
