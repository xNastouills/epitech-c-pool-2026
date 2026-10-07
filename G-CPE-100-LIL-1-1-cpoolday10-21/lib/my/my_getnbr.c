/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 04 - my_getnbr.c
** File description:
** Get nbr from string
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    long nb = 0;
    int sign = 1;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10 + (str[i] - '0');
        if (nb * sign < -2147483648 || nb * sign > 2147483647)
            return 0;
    }
    return nb * sign;
}
