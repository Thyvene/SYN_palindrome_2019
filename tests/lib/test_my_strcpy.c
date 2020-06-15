/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strcpy function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strcpy(char *dest, const char *src)

Test(my_strcpy, return_value_is_good)
{
    char *str;

    str = strdup("");
    cr_expect_str_eq(my_strcpy(str, "hello"), "hello");
}
