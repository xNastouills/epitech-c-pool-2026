/*
** EPITECH PROJECT, 2026
** my_getnbr.c
** File description:
** my_lib
*/

int my_getnbr(char const *str)
{
    int nb_01 = 1;
    int nb_00 = 0;

    while (*str == '+' || *str == '-') {
        if (*str == '-')
            nb_01 = -nb_01;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        if (nb_00 > 214748364 ||
            (nb_00 == 214748364 && (*str - '0') > (nb_01 == 1 ? 7 : 8)))
            return 0;
        nb_00 = nb_00 * 10 + (*str - '0');
        str++;
    }
    return nb_00 * nb_01;
}
