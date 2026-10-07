/*
** EPITECH PROJECT, 2026
** my_find_prime_sup.c
** File description:
** my_lib
*/

int is_prime(int nb)
{
    int i;

    if (nb < 2) {
        return 0;
    }
    for (i = 2; i <= nb / i; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    while (is_prime(nb) == 0) {
        nb++;
    }
    return nb;
}
