/*
** EPITECH PROJECT, 2026
** my_compute_square_root.c
** File description:
** my_lib
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb < 0)
        return 0;
    if (nb == 0)
        return 0;
    while (i <= nb / i) {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}
