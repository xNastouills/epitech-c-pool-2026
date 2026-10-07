/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 04 - my_swap.c
** File description:
** Swaps content of two integers
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int old_b = *b;

    *b = *a;
    *a = old_b;
}
