/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** basic_test_two
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "palindrome.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Bad_arguments, Test_palindrome_bad_arguments, .init = redirect_all_stdout)
{
    value_t value = {-1, -1, 10, 6, 100};

    palindrome(value);
    cr_assert_stdout_eq_str("Error: bad option\n");
}