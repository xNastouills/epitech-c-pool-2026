/*
** EPITECH PROJECT, 2026
** star.c
** File description:
** cpool-project
*/

static void print_chars(char c, int count)
{
    int i;

    for (i = 0; i < count; i++)
        my_putchar(c);
}

static void top_bot(int size, int is_bot)
{
    int margin;
    int i;
    int idx;

    for (i = 0; i < size; i++) {
        idx = is_bot ? (size - 1 - i) : i;
        margin = (size == 1) ? 3 : (3 * size - 1 - idx);
        print_chars(' ', margin);
        my_putchar('*');
        if (idx > 0) {
            print_chars(' ', 2 * idx - 1);
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

static void line(int size)
{
    int stars = (size == 1) ? 3 : (2 * size + 1);
    int spaces = (size == 1) ? 1 : (2 * size - 3);
    int i;

    for (i = 0; i < stars; i++)
        my_putchar('*');
    for (i = 0; i < spaces; i++)
        my_putchar(' ');
    for (i = 0; i < stars; i++)
        my_putchar('*');
    my_putchar('\n');
}

static void body(int size)
{
    int i;
    int spaces_in;

    for (i = 1; i <= size; i++) {
        print_chars(' ', i);
        my_putchar('*');
        spaces_in = (size == 1) ? 3 : (6 * size - 3 - 2 * i);
        print_chars(' ', spaces_in);
        my_putchar('*');
        my_putchar('\n');
    }
    for (i = size - 1; i > 0; i--) {
        print_chars(' ', i);
        my_putchar('*');
        spaces_in = (size == 1) ? 3 : (6 * size - 3 - 2 * i);
        print_chars(' ', spaces_in);
        my_putchar('*');
        my_putchar('\n');
    }
}

void star(unsigned int size)
{
    if (size == 0)
        return;
    if (size == 1) {
        top_bot(1, 0);
        line(1);
        print_chars(' ', 1);
        my_putchar('*');
        print_chars(' ', 3);
        my_putchar('*');
        my_putchar('\n');
        line(1);
        top_bot(1, 1);
        return;
    }
    top_bot((int)size, 0);
    line((int)size);
    body((int)size);
    line((int)size);
    top_bot((int)size, 1);
}
