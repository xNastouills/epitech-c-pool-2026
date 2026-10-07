/*
** EPITECH PROJECT, 2026
** rush1
** File description:
** rush-1-1
*/

#include <unistd.h>
#include "rush.h"

static void print_error(void)
{
    write(2, "Invalid size\n", 13);
}

static char square(int x, int y, int col, int ligne)
{
    int left = (col == 0);
    int right = (col == x - 1);
    int top = (ligne == 0);
    int bot = (ligne == y - 1);

    if ((bot || top) && (right || left))
        return 'o';
    if (bot || top)
        return '-';
    if (right || left)
        return '|';
    return ' ';
}

void rush(int x, int y)
{
    int ligne;
    int col;

    if (x <= 0 || y <= 0) {
        print_error();
        return;
    }
    for (ligne = 0; ligne < y; ligne++) {
        for (col = 0; col < x; col++)
            my_putchar(square(x, y, col, ligne));
        my_putchar('\n');
    }
}
