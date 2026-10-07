/*
** EPITECH PROJECT, 2026
** PISCINE C - my_putchar.c
** File description:
** write 1 char
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
