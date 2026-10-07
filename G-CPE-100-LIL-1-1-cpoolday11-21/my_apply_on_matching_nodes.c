/*
** EPITECH PROJECT, 2026
** my_apply_on_matching_nodes
** File description:
** day11
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_apply_on_matching_nodes(
    linked_list_t *begin,
    int (*f)(void *),
    void const *data_ref,
    int (*cmp)(void *, void const *)
)
{
    linked_list_t *current;

    if (begin == NULL || f == NULL || cmp == NULL)
        return (0);
    current = begin;
    while (current != NULL) {
        if (cmp(current->data, data_ref) == 0) {
            f(current->data);
        }
        current = current->next;
    }
    return (0);
}
