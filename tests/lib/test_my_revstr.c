/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** test my_revstr function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_revstr(char *str);

Test(my_revstr, return_value_is_good)
{
    char *str;

    str = strdup("Epitech");
    cr_expect_str_eq(my_revstr(str), "hcetipE");
}

Test(my_revstr, return_value_is_good_2)
{
    char *str;

    str = strdup("Hello");
    cr_expect_str_eq(my_revstr(str), "olleH");
}

Test (my_revstr, return_value_is_good_3)
{
    char *str;

    str = strdup("coucou");
    cr_expect_str_eq(my_revstr(str), "uocuoc");
}
