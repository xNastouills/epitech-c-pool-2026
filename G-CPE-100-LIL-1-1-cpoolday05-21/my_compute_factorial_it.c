/*
** EPITECH PROJECT, 2026
** my_compute_factorial_it.c
** File description:
** day05
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb > 12) {
        return 0;
    }
    if (nb < 0) {
        return 0;
    }
    if (nb == 0) {
        return 1;
    }
    while (nb > 1) {
        result *= nb;
        nb--;
    }
    return result;
}
