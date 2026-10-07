/*
** EPITECH PROJECT, 2026
** my_putstr.c
** File description:
** Day03
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
}
