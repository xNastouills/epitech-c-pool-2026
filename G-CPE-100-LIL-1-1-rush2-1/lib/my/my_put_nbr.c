/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 03 - my_put_nbr.c
** File description:
** Print the number
*/

#include "../../include/my.h"

static void hardcode_max(void)
{
    my_putchar('-');
    my_putchar('2');
}

int my_put_nbr(int nb)
{
    int n = 0;

    if (nb == -2147483648) {
        hardcode_max();
        my_put_nbr(147483648);
        return 0;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb + '0');
        return 0;
    }
    n = nb % 10;
    nb /= 10;
    my_put_nbr(nb);
    my_putchar(n + '0');
    return 0;
}
