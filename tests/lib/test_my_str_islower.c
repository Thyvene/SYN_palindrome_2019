/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** Test my_str_islower function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_str_islower(const char *str);

Test(my_str_islower, return_value_is_good)
{
    cr_expect_eq(my_str_islower("hello"), 1);
    cr_expect_eq(my_str_islower("epitech2024"), 0);
    cr_expect_eq(my_str_islower("EPITECH"), 0);
}
