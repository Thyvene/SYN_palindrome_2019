/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strncpy function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strncpy(char *dest, const char *src, size_t len);

Test(my_strncpy, return_value_is_good)
{
    char *str;

    str = strdup("");
    cr_expect_str_eq(my_strncpy(str, "hello World", 8), "hello Wo");
}
