/*
** EPITECH PROJECT, 2026
** my_show_word_array.c
** File description:
** day08
*/

#include "include/my.h"

int my_show_word_array(char *const *tab)
{
    if (tab == 0)
        return (84);
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
