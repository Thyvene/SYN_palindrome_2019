/*
** EPITECH PROJECT, 2020
** test_my_printf.c
** File description:
** test my_printf function
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

int my_printf(char *str, ...);

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, output_1, .init = redirect_all_std)
{
    my_printf("Hello Epitech");
    cr_assert_stdout_eq_str("Hello Epitech");
}

Test(my_printf, output_2, .init = redirect_all_std)
{
    my_printf("hello techpi");
    cr_assert_stdout_eq_str("hello techpi");
}

Test(my_printf, output_3, .init = redirect_all_std)
{
    my_printf("%s\n", "Hello 42");
    cr_assert_stdout_eq_str("Hello 42\n");
}

Test(my_printf, output_4, .init = redirect_all_std)
{
    my_printf("%c\n", 'a');
    cr_assert_stdout_eq_str("a\n");
}