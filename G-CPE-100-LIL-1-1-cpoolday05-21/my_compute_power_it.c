/*
** EPITECH PROJECT, 2026
** my_compute_power.c
** File description:
** day05
*/

int my_compute_power_it(int nb, int p)
{
    long long result = 1;

    if (p < 0)
        return 0;
    for (int i = 0; i < p; i++) {
        result *= nb;
        if (result > 2147483647 || result < -2147483648LL)
            return 0;
    }
    return (int)
        result;
}
