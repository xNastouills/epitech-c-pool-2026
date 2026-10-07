/*
** EPITECH PROJECT, 2026
** my_print_params.c
** File description:
** day07
*/

#include "../include/my.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc) {
        my_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
