/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** basic_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "palindrome.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Option_n,  Test_iteration_with_a_base_of_10, .init = redirect_all_stdout)
{
    value_t value = {4782, -1, 10, 0, 100};

    iteration(value.nb, value);
    cr_assert_stdout_eq_str("4782 leads to 46464 in 3 iteration(s) in base \
    10\n");
}

Test(Option_n, Test_iteration_with_a_base_of_2, .init = redirect_all_stdout)
{
    value_t value = {64, -1, 2, 0, 100};

    iteration(value.nb, value);
    cr_assert_stdout_eq_str("64 leads to 65 in 1 iteration(s) in base 2\n");
}

Test(Option_n, Test_iteration_with_imin, .init = redirect_all_stdout)
{
    value_t value = {64, -1, 2, 5, 100};

    iteration(value.nb, value);
    cr_assert_stdout_eq_str("64 leads to 585 in 5 iteration(s) in base 2\n");
}

Test(Option_p, Test_p_option_and_imin, .init = redirect_all_stdout)
{
    value_t value = {-1, 363, 10, 6, 100};

    palindrome(value);
    cr_assert_stdout_eq_str("3 leads to 363 in 6 iteration(s) in base 10\n");
}