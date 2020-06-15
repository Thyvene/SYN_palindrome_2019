/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strupcase function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strupcase(char *str);

Test(my_strupcase, return_value_is_good)
{
    char *str;

    str = strdup("Epitech");
    cr_expect_str_eq(my_strupcase(str), "EPITECH");
}

Test(my_strupcase, return_value_is_good_2)
{
    char *str;

    str = strdup("Ep1t3ch u");
    cr_expect_str_eq(my_strupcase(str), "Ep1t3ch u");
}

Test(my_strupcase, return_value_is_good_3)
{
    char *str;

    str = strdup("42epitech");
    cr_expect_str_eq(my_strupcase(str), "42EPITECH");
}
