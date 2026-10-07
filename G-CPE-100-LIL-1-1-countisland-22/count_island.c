/*
** EPITECH PROJECT, 2026
** count_island.c
** File description:
** cpool
*/

#include "include/my.h"

static void fill_island(char **world, int l, int c, char island_num)
{
    if (world == (void *)0 || l < 0 || c < 0 || world[l] == (void *)0)
        return;
    if (world[l][c] != 'X')
        return;
    world[l][c] = island_num;
    fill_island(world, l - 1, c, island_num);
    fill_island(world, l + 1, c, island_num);
    fill_island(world, l, c - 1, island_num);
    fill_island(world, l, c + 1, island_num);
}

static void check_line(char **world, int l, int *count)
{
    int c = 0;

    for (c = 0; world[l][c] != '\0'; c++) {
        if (world[l][c] == 'X') {
            fill_island(world, l, c, '0' + *count);
            (*count)++;
        }
    }
}

int count_island(char **world)
{
    int count = 0;
    int l = 0;

    if (world == (void *)0)
        return 0;
    for (l = 0; world[l] != (void *)0; l++)
        check_line(world, l, &count);
    return count;
}
