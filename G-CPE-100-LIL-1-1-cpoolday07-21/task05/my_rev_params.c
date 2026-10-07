/*
** EPITECH PROJECT, 2026
** my_rev_params
** File description:
** day07
*/

#include "../include/my.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = argc - 1;

    while (i >= 0) {
        my_putstr(argv[i]);
        write(1, "\n", 1);
        i--;
    }
    return 0;
}
