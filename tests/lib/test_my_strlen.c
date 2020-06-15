/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strlen function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_strlen(char const *str);

Test(my_strlen, return_value_is_good)
{
    cr_assert_eq(my_strlen("toto"), 4);
    cr_assert_eq(my_strlen("Epitech"), 7);
    cr_assert_eq(my_strlen("Hello World"), 11);
    cr_assert_eq(my_strlen(""), 0);
}
