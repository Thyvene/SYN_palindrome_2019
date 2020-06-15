/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strstr function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strstr(char *s1, const char *to_find);

Test(my_strstr, return_value_is_good)
{
    cr_expect_str_eq(my_strstr("Hello World", "Hello W"), "Hello World");
    cr_expect_str_eq(my_strstr("hello", "hel"), "hello");
    cr_expect_str_eq(my_strstr("world 42abc", "abc"), "abc");
    cr_expect_str_eq(my_strstr("42words", "ords"), "ords");
}
