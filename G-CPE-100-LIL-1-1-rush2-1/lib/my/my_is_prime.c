/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 05 - my_is_prime.c
** File description:
** Print if is a prime
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    for (int i = 2; (long) (i * i) <= nb; i++)
        if (nb % i == 0)
            return 0;
    return 1;
}
