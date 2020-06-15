/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** test my_getnbr function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_getnbr(char *str);

Test(my_getnbr, return_value_is_good)
{
    cr_assert_eq(my_getnbr("+---+--++---+---+---+-42"), -42);
    cr_assert_eq(my_getnbr("42a43"), 42);
    cr_assert_eq(my_getnbr("42-43"), 42);
    cr_assert_eq(my_getnbr("000000042"), 42);
    cr_assert_eq(my_getnbr("0"), 0);
    cr_assert_eq(my_getnbr("12"), 12);
    cr_assert_eq(my_getnbr("-12"), -12);
    cr_assert_eq(my_getnbr("1111000000000000000000000042"), 0);
    cr_assert_eq(my_getnbr("-111111100000000000000000042"), 0);
}
