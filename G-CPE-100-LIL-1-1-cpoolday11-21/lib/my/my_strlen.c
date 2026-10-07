/*
** EPITECH PROJECT, 2026
** my_strlen.c
** File description:
** my_lib
*/

int my_strlen(char const *str)
{
    int storage = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        storage += 1;
    }
    return storage;
}
