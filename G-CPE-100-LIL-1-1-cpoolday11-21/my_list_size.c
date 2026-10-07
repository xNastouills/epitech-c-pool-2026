/*
** EPITECH PROJECT, 2026
** my_list_size.c
** File description:
** day11
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    linked_list_t const *tmp = begin;

    while (tmp != NULL) {
        i++;
        tmp = tmp->next;
    }
    return i;
}
