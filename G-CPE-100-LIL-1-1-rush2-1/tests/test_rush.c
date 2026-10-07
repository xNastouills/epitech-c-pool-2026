/*
** EPITECH PROJECT, 2026
** Rush02
** File description:
** cpool
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(get_strlen_alpha, test_strlen_alpha_all_cases)
{
    cr_assert_eq(get_strlen_alpha("Hello World 123!"), 10);
}

Test(get_occurrences, test_occurrences_standard)
{
    char str[] = "Hello World";

    cr_assert_eq(get_occurrences(str, "o"), 2);
}

Test(get_occurrences, test_occurrences_edge_cases)
{
    char str[] = "Hello World";

    cr_assert_eq(get_occurrences(NULL, "a"), 0);
}
