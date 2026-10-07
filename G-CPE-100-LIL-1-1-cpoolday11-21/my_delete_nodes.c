/*
** EPITECH PROJECT, 2026
** my_delete_nodes.c
** File description:
** day11
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref,
    int (*cmp)(void *, void const *))
{
    linked_list_t **current;
    linked_list_t *tmp;

    if (begin == NULL || *begin == NULL || cmp == NULL)
        return (0);
    current = begin;
    while (*current != NULL) {
        if (cmp((*current)->data, data_ref) == 0) {
            tmp = *current;
            *current = (*current)->next;
            free(tmp);
        } else {
            current = &(*current)->next;
        }
    }
    return (0);
}
