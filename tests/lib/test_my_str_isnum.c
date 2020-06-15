/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_str_isnum function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_str_isnum(const char *str);

Test(my_str_isnum, return_value_is_good)
{
    cr_expect_eq(my_str_isnum("424242"), 1);
    cr_expect_eq(my_str_isnum("42Epitech"), 0);
    cr_expect_eq(my_str_isnum("Epitech"), 0);
    cr_expect_eq(my_str_isnum("Epi---tech"), 0);
}

