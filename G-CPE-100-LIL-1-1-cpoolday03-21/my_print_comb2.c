/*
** EPITECH PROJECT, 2026
** my_print_comb2.c
** File description:
** day03
*/

void my_putchar(char c);

static void print_separator(int a, int b)
{
    if (a != 98 || b != 99) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a;
    int b;

    for (a = 0; a <= 98; a++) {
        for (b = a + 1; b <= 99; b++) {
            my_putchar(a / 10 + '0');
            my_putchar(a % 10 + '0');
            my_putchar(' ');
            my_putchar(b / 10 + '0');
            my_putchar(b % 10 + '0');
            print_separator(a, b);
        }
    }
    return 0;
}
