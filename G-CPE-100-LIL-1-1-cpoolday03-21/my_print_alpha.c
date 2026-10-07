/*
** EPITECH PROJECT, 2026
** my_print_alpha.c
** File description:
** day03
*/

#include <unistd.h>

int my_print_alpha(void)
{
    char c = 'a';

    for (int i = 0; i < 26; i++){
        write(1, &c, 1);
        c = c + 1;
    }
    return 0;
}
