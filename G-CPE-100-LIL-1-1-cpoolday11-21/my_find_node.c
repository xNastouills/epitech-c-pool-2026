/*
** EPITECH PROJECT, 2026
** my_find_node.c
** File description:
** day11
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
    int (*cmp)(void *, void const *))
{
    linked_list_t const *current;

    if (begin == NULL || cmp == NULL)
        return NULL;
    current = begin;
    while (current != NULL) {
        if (cmp(current->data, data_ref) == 0)
            return (linked_list_t *)current;
        current = current->next;
    }
    return NULL;
}
