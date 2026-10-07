/*
** EPITECH PROJECT, 2026
** my_short_int_array.c
** File description:
** my_lib
*/

static void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

static void check_swap(int *array, int i, int j)
{
    if (array[i] > array[j])
        swap(&array[i], &array[j]);
}

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size - 1) {
        j = i + 1;
        while (j < size) {
            check_swap(array, i, j);
            j++;
        }
        i++;
    }
}
