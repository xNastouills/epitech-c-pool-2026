/*
** EPITECH PROJECT, 2026
** my_isneg.c
** File description:
** my_lib
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return 0;
}
