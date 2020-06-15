/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_str_isupper function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_str_isupper(const char *str);

Test(my_str_isupper, return_value_is_good)
{
    cr_expect_eq(my_str_isupper("EPITECH"), 1);
    cr_expect_eq(my_str_isupper("Epitech42"), 0);
    cr_expect_eq(my_str_isupper("epitech"), 0);
}
