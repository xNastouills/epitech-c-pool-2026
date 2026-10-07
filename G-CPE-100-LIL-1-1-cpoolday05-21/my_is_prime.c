/*
** EPITECH PROJECT, 2026
** my_is_prime.c
** File description:
** day05
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 2; i <= nb / i; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
