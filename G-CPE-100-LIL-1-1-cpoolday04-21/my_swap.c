/*
** EPITECH PROJECT, 2026
** my_swap.c
** File description:
** Day04
*/

void my_swap(int *a, int *b)
{
    int mswap = *a;

    *a = *b;
    *b = mswap;
}
