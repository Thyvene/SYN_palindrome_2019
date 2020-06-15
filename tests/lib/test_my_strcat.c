/*
** EPITECH PROJECT, 2020
** PSU_tetris_2020
** File description:
** Test my_strcat function
*/

#include <criterion/criterion.h>
#include "my.h"

char *my_strcat(char *dest, char const *src);

Test(my_strcat, return_value_is_good)
{
    char *dest = strdup("");
    char *dest1 = strdup("Epitech");
    char *dest2 = strdup("Epitech");

    cr_expect_str_eq(my_strcat(dest, "Hello"), "Hello");
    cr_expect_str_eq(my_strcat(dest1, " World"), "Hello World");
    cr_expect_str_eq(my_strcat(dest2, ""), "Hello");
}
