/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 03 - my_isneg.c
** File description:
** Print 'N' if number is negative or 'P' is positive or null
*/

#include <unistd.h>
#include "../../include/my.h"

int my_isneg(int n)
{
    my_putchar(n < 0 ? 'N' : 'P');
    return 0;
}
