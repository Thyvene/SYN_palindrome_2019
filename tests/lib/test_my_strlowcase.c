/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strlowcase function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strlowcase(char *str);

Test(my_strlowcase, return_value_is_good)
{
    char *str;

    str = strdup("EPITECH");
    cr_expect_str_eq(my_strlowcase(str), "epitech");
}

Test(my_strlowcase, return_value_is_good_1)
{
    char *str;

    str = strdup("EP1T3CH");
    cr_expect_str_eq(my_strlowcase(str), "ep1t3ch");
}

Test(my_strlowcase, return_value_is_good_2)
{
    char *str;

    str = strdup("42EPITECH");
    cr_expect_str_eq(my_strlowcase(str), "42epitech");
}
