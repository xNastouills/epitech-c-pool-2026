/*
** EPITECH PROJECT, 2026
** my_params_to_list.c
** File description:
** day11
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;
    linked_list_t *new = NULL;
    int i = 0;

    for (; i < ac; i++) {
        new = malloc(sizeof(linked_list_t));
        if (new == NULL) {
            return NULL;
        }
        new->data = av[i];
        new->next = list;
        list = new;
    }
    return list;
}
