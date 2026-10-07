/*
** EPITECH PROJECT, 2026
** my_swap.c
** File description:
** my_lib
*/

void my_swap(int *a, int *b)
{
    int mswap = *a;

    *a = *b;
    *b = mswap;
}
