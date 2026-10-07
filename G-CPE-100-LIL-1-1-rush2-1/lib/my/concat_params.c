/*
** EPITECH PROJECT, 2026
** concat_params.c
** File description:
** day08
*/

#include <stdlib.h>

static int get_total_len(int argc, char **argv)
{
    int len = 0;

    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++)
            len++;
        len++;
    }
    return (len);
}

char *concat_params(int argc, char **argv)
{
    char *str;
    int pos = 0;

    if (argc <= 0)
        return (0);
    str = malloc(sizeof(char) * get_total_len(argc, argv));
    if (str == 0)
        return (0);
    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            str[pos] = argv[i][j];
            pos++;
        }
        str[pos] = (i == argc - 1) ? '\0' : '\n';
        pos++;
    }
    return (str);
}
