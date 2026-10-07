/*
** EPITECH PROJECT, 2026
** my_apply_on_nodes.c
** File description:
** day11
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *current;

    if (begin == NULL || f == NULL)
        return 0;
    current = begin;
    while (current != NULL) {
        f(current->data);
        current = current->next;
    }
    return 0;
}
