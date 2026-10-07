/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 05 - my_compute_square_root.c
** File description:
** Print sqrt of a number
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int x;
    int a = 1;
    int b = nb;

    while (a <= b) {
        x = (a + b) / 2;
        if ((long) (x * x) == nb)
            return x;
        if ((long) (x * x) < nb)
            a = x + 1;
        else
            b = x - 1;
    }
    return 0;
}
