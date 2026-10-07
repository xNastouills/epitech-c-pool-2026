/*
** EPITECH PROJECT, 2026
** my_compute_power_rec.c
** File description:
** day05
*/

int my_compute_power_rec(int nb, int p)
{
    long long result;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    result = (long long)nb * my_compute_power_rec(nb, p - 1);
    if (result > 2147483647 || result < -2147483648LL)
        return 0;
    return (int)result;
}
