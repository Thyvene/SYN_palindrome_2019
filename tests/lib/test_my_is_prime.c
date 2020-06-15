/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** test my_is_prime function
*/

#include <criterion/criterion.h>
#include "my.h"

int my_is_prime(int nb);

Test(my_is_prime, return_value_is_good)
{
    cr_assert_eq(my_is_prime(11), 1);
    cr_assert_eq(my_is_prime(1), 0);
    cr_assert_eq(my_is_prime(6), 0);
}
