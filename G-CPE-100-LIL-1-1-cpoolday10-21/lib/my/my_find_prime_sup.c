/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 05 - my_find_prime_sup.c
** File description:
** FInd prime or sup of an number
*/

#include "../../include/my.h"

static int my_isprime(int nb)
{
    if (nb < 2)
        return 0;
    for (int i = 2; (long) (i * i) <= nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (my_isprime(i) != 1) {
        if (i == 2147483647)
            return (0);
        i++;
    }
    return i;
}
