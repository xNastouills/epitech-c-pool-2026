/*
** EPITECH PROJECT, 2026
** PISCINE C - RUSH 02 - main.c
** File description:
** Detect language
*/

#include "include/frequencies.h"
#include "include/my.h"

static int is_alphabetic(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

void put_float(float nb)
{
    int nb_int = (int)nb;
    int decimal = (int)((nb - nb_int) * 100);

    my_put_nbr(nb_int);
    my_putchar('.');
    if (decimal < 10)
        my_put_nbr(0);
    my_put_nbr(decimal);
}

int get_strlen_alpha(char *phrase)
{
    int length = 0;

    for (int i = 0; phrase[i] != '\0'; i++)
        if (is_alphabetic(phrase[i]))
            length++;
    return length;
}

int get_occurrences(char *phrase, char *letter)
{
    int count = 0;
    char lower = 0;
    char upper = 0;

    if (!phrase || !letter || letter[0] == '\0')
        return 0;
    lower = letter[0];
    upper = letter[0];
    if (letter[0] >= 'a' && letter[0] <= 'z')
        upper = letter[0] - 32;
    if (letter[0] >= 'A' && letter[0] <= 'Z')
        lower = letter[0] + 32;
    for (int i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == lower || phrase[i] == upper)
            count++;
    }
    return count;
}

static int get_language(char *phrase, int total)
{
    int best = 0;
    double min_score = -1.0;
    double diff = 0.0;
    double score = 0.0;

    for (int l = 0; l < LANGUAGE_COUNT; l++) {
        score = 0.0;
        for (int i = 0; i < LETTER_COUNT; i++) {
            diff = ((double)get_occurrences(phrase, (char[]){'a' + i, '\0'}));
            diff = (diff / total * 100.0) - languages[l].freq[i];
            score += diff * diff;
        }
        if (min_score < 0 || score < min_score) {
            min_score = score;
            best = l;
        }
    }
    return best;
}

void print_result(int argc, char **argv)
{
    int total = 0;
    int occurrences = 0;
    float frequencies = 0;

    total = get_strlen_alpha(argv[1]);
    for (int i = 2; i < argc; i++) {
        occurrences = get_occurrences(argv[1], argv[i]);
        frequencies = ((float)occurrences / total * 100);
        my_putstr(argv[i]);
        my_putchar(':');
        my_put_nbr(occurrences);
        my_putstr(" (");
        put_float(frequencies);
        my_putstr("%)\n");
    }
    my_putstr("=> ");
    my_putstr(languages[get_language(argv[1], total)].name);
}

#ifndef UNIT_TEST
int main(int argc, char **argv)
{
    if (argc < 3)
        return 84;
    print_result(argc, argv);
    return 0;
}
#endif
