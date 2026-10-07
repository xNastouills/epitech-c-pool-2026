/*
** EPITECH PROJECT, 2026
** my_isneg.c
** File description:
** day02
*/

#include <../../include/my.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return 0;
}
