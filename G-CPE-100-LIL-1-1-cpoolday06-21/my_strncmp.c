/*
** EPITECH PROJECT, 2026
** my_strncmp.c
** File description:
** day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    i = 0;
    while (i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    return (0);
}
