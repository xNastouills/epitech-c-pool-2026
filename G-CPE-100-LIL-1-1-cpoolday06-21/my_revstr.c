/*
** EPITECH PROJECT, 2026
** my_revstr.c
** File description:
** day06
*/

char *my_revstr(char *str)
{
    int i;
    int j;
    char tmp;

    for (i = 0; str[i] != '\0'; i++);
    i--;
    j = 0;
    for (; j < i;) {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        j++;
        i--;
    }
    return (str);
}
