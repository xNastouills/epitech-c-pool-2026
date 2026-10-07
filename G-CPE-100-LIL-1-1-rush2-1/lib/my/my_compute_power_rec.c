/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 05 - my_compute_power_rec.c
** File description:
** Print power in rec
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p > 1) {
        result = (long) nb * my_compute_power_rec(nb, p - 1);
        if (result > 2147483647 || result < -2147483648)
            return 0;
        return result;
    }
    return result;
}
