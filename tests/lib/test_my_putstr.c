/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** test my_putstr function
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int my_putstr(char const *str);

static void redirect_all_stdr(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putstr, output_1, .init = redirect_all_stdr)
{
    my_putstr("Hello Epitech");
    cr_assert_stdout_eq_str("Hello Epitech");
}

Test(my_putstr, output_2, .init = redirect_all_stdr)
{
    my_putstr("0123456789");
    cr_assert_stdout_eq_str("0123456789");
}

Test(my_putstr, output_3, .init = redirect_all_stdr)
{
    my_putstr("4\42*/+^><\t\n");
    cr_assert_stdout_eq_str("4\42*/+^><\t\n");
}
