/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_str_isalpha function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_str_isalpha(const char *str);

Test(my_str_isalpha, return_value_is_good)
{
    cr_expect_eq(my_str_isalpha("Hello"), 1);
    cr_expect_eq(my_str_isalpha("Hello4242"), 0);
    cr_expect_eq(my_str_isalpha("Epit+++42"), 0);
}
