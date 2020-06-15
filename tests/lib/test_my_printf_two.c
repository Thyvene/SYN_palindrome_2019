/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** test of my_printf functions part two
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int my_printf(char *str, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, output_5, .init = redirect_all_std)
{
    my_printf("%i\n", 42);
    cr_assert_stdout_eq_str("42\n");
}

Test(my_printf, output_6, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, output_7, .init = redirect_all_std)
{
    my_printf("%+d %b %o %x %X %u % d %#o %u\n", 42, 42, 42, 42,
    42, 42, 42, 42, 42);
    cr_assert_stdout_eq_str("+42 101010 52 2a 2A 42 42 052 42\n");
}