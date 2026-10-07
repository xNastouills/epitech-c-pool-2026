/*
** EPITECH PROJECT, 2026
** test_my_strncpy.c
** File description:
** day06
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_string)
{
    char my_dest[20];
    char dest[20];

    my_strncpy(my_dest, "Hello", 6);
    strncpy(dest, "Hello", 6);
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, copy_part_of_string)
{
    char my_dest[20];
    char dest[20];

    my_strncpy(my_dest, "Hello", 3);
    strncpy(dest, "Hello", 3);
    my_dest[3] = '\0';
    dest[3] = '\0';
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, copy_exact_length)
{
    char my_dest[20];
    char dest[20];

    my_strncpy(my_dest, "Hello", 5);
    strncpy(dest, "Hello", 5);
    my_dest[5] = '\0';
    dest[5] = '\0';
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, source_shorter_than_n)
{
    char my_dest[20];
    char dest[20];

    my_strncpy(my_dest, "Hi", 5);
    strncpy(dest, "Hi", 5);
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, zero_length)
{
    char my_dest[20] = "Hello";
    char dest[20] = "Hello";

    my_strncpy(my_dest, "World", 0);
    strncpy(dest, "World", 0);
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strncpy, empty_source)
{
    char my_dest[20];
    char dest[20];

    my_strncpy(my_dest, "", 5);
    strncpy(dest, "", 5);
    cr_assert_str_eq(my_dest, dest);
}
