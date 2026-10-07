/*
** EPITECH PROJECT, 2026
** PISCINE C - Day 04 - my_sort_int_array.c
** File description:
** Sort an array
*/

#include "../../include/my.h"

static void swap_if(int *a, int *b)
{
    int old_b;

    if (*a < *b) {
        old_b = *b;
        *b = *a;
        *a = old_b;
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            swap_if(&array[j], &array[i]);
        }
    }
}
