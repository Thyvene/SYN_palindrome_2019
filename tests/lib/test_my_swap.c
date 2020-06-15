/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_swap function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_swap(int *a, int *b);

Test(my_swap, value_are_equal)
{
    int a = 42;
    int b = 24;

    my_swap(&a, &b);
    cr_assert_eq(a, 24);
    cr_assert_eq(b, 42);
}
