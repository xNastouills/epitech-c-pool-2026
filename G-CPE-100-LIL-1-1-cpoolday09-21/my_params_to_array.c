/*
** EPITECH PROJECT, 2026
** my_params_to_array.c
** File description:
** day09
*/

#include <stdlib.h>
#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param *params;

    if (av == NULL)
        return NULL;
    params = malloc(sizeof(struct info_param) * (ac + 1));
    if (params == NULL)
        return NULL;
    while (i < ac) {
        params[i].length = my_strlen(av[i]);
        params[i].str = av[i];
        params[i].copy = my_strdup(av[i]);
        params[i].word_array = my_str_to_word_array(av[i]);
        i++;
    }
    params[i].str = 0;
    return params;
}
