/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strncat function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb);

Test(my_strncat, return_value_is_good)
{
    char *dest = strdup("");
    char *dest1 = strdup("Hello");
    char *dest2 = strdup("Hello");

    cr_expect_str_eq(my_strncat(dest, "Hello", 2), "He");
    cr_expect_str_eq(my_strncat(dest1, " World", 6), "Hello World");
    cr_expect_str_eq(my_strncat(dest2, "", 1), "Hello");
}
