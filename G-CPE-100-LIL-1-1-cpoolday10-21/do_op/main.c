/*
** EPITECH PROJECT, 2026
** do_op
** File description:
** Main file for do-op task
*/

#include <unistd.h>
#include "../include/my.h"

static int add(int a, int b)
{
    return (a + b);
}

static int sub(int a, int b)
{
    return (a - b);
}

static int mul(int a, int b)
{
    return (a * b);
}

static int div_op(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop : division by zero\n");
        return (0);
    }
    return (a / b);
}

static int mod_op(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop : modulo by zero\n");
        return (0);
    }
    return (a % b);
}

static int compute_op(int val1, char op, int val2)
{
    char ops[5] = {'+', '-', '*', '/', '%'};
    int (*funcs[5])(int, int) = {&add, &sub, &mul, &div_op, &mod_op};

    for (int i = 0; i < 5; i++) {
        if (op == ops[i])
            return (funcs[i](val1, val2));
    }
    my_put_nbr(0);
    my_putchar('\n');
    return (0);
}

static int check_errors(char **av, int val2)
{
    if (av[2][1] != '\0') {
        my_put_nbr(0);
        my_putchar('\n');
        return (84);
    }
    if (av[2][0] == '/' && val2 == 0) {
        div_op(1, 0);
        return (84);
    }
    if (av[2][0] == '%' && val2 == 0) {
        mod_op(1, 0);
        return (84);
    }
    return (0);
}

int main(int ac, char **av)
{
    int val1 = 0;
    int val2 = 0;

    if (ac != 4)
        return (84);
    val1 = my_getnbr(av[1]);
    val2 = my_getnbr(av[3]);
    if (check_errors(av, val2) == 84)
        return (84);
    my_put_nbr(compute_op(val1, av[2][0], val2));
    my_putchar('\n');
    return (0);
}
