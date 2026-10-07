/*
** EPITECH PROJECT, 2026
** my_print.digits.c
** File description:
** Day02
*/

#include <unistd.h>

int my_print_digits(void)
{
    char c = 48;

    for (int i = 48; i < 58; i++) {
        write(1, &c, 1);
        c = c + 1;
    }
    return 0;
}
