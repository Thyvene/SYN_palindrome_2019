/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** more_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "palindrome.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Basic_test, No_solution_found_palin, .init = redirect_all_stdout)
{
    value_t value = {-1, 363, 10, 7, 100};

    palindrome(value);
    cr_assert_stdout_eq_str("no solution\n\0");
}

Test(Basic_test, No_solution_found_iter, .init = redirect_all_stdout)
{
    value_t value = {9, -1, 10, -9, 100};

    iteration(value.nb, value);
    cr_assert_stdout_eq_str("no solution\n\0");
}