/*
** EPITECH PROJECT, 2019
** my_sort_int_array.c
** File description:
** Function my_sort_int_array
*/

#include "my.h"

void my_sort_int_array(int *array, int size)
{
    for (int a = 0; a < size; a++)
        if (a != size - 1 && array[a] > array[a + 1]) {
            my_swap(&array[a], &array[a + 1]);
            a = -1;
        }
}
