/*
** EPITECH PROJECT, 2026
** my_print_comb.c
** File description:
** day03
*/

void my_putchar(char c);

void my_loop(char a, char b)
{
    for (char c = b + 1; c <= '9'; c++) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        if (!(a == '7' && b == '8' && c == '9')) {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb(void)
{
    for (char a = '0'; a <= '7'; a++) {
        for (char b = a + 1; b <= '8'; b++) {
            my_loop(a, b);
        }
    }
    return 0;
}
