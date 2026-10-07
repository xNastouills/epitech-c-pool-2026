/*
** EPITECH PROJECT, 2026
** test_my_revstr.c
** File description:
** Unit tests for my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reverse_odd_length)
{
    char str[] = "Hello";

    cr_assert_str_eq(my_revstr(str), "olleH");
}

Test(my_revstr, reverse_even_length)
{
    char str[] = "Code";

    cr_assert_str_eq(my_revstr(str), "edoC");
}

Test(my_revstr, reverse_single_char)
{
    char str[] = "A";

    cr_assert_str_eq(my_revstr(str), "A");
}

Test(my_revstr, reverse_empty_string)
{
    char str[] = "";

    cr_assert_str_eq(my_revstr(str), "");
}

Test(my_revstr, reverse_two_chars)
{
    char str[] = "AB";

    cr_assert_str_eq(my_revstr(str), "BA");
}

Test(my_revstr, reverse_already_reversed)
{
    char str[] = "olleH";

    cr_assert_str_eq(my_revstr(str), "Hello");
}
