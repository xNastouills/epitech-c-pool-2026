/*
** EPITECH PROJECT, 2026
** my_print_revalpha.c
** File description:
** day02
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    char c = 'z';

    for (int i = 0; i < 26; i++) {
        write(1, &c, 1);
        c = c - 1;
    }
    return 0;
}
