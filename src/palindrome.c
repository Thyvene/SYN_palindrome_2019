/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** palindrome
*/

#include "palindrome.h"

static void need_free(void *str1, void *str2, void *str3)
{
    if (str1)
        free(str1);
    if (str2)
        free(str2);
    if (str3)
        free(str3);
}

static void print_result(int nb, int res, int iteration, int base)
{
    my_printf("%d leads to %d in %d iteration(s) in base %d\n" \
    , nb, res, iteration, base);
}

void iteration(int nb, value_t value)
{
    char *str = transform_base(nb, value.base, 0);
    char *str_two = my_revstr(my_strdup(str));
    int i = (nb == 0) ? value.imin : 0;

    for (; !(my_strcmp(str, str_two) == 0 && i >= value.imin) &&
    i < value.imax && nb > 0; i++) {
        nb = (transform_arg(str, value.base) +
        transform_arg(str_two, value.base));
        need_free(str, str_two, NULL);
        str = transform_base(nb, value.base, 0);
        str_two = my_revstr(my_strdup(str));
    }
    if (i < value.imin || my_strcmp(str, str_two) != 0)
        write(1, "no solution\n\0", 13);
    else
        print_result(value.nb, nb, i, value.base);
    need_free(str, str_two, NULL);
}

static int palindrome_iteration(int nb, value_t value)
{
    char *str = transform_base(nb, value.base, 0);
    char *str_two = my_revstr(my_strdup(str));
    char *palin_str = transform_base(value.pal, value.base, 0);
    int i = (nb == 0) ? value.imin : 0;
    int check = 0;

    for (; !(my_strcmp(str, palin_str) == 0 && i >= value.imin) &&
    i < value.imax && nb > 0; i++) {
        nb = (transform_arg(str, value.base) +
        transform_arg(str_two, value.base));
        need_free(str, str_two, NULL);
        str = transform_base(nb, value.base, 0);
        str_two = my_revstr(my_strdup(str));
    }
    if (i >= value.imin && my_strcmp(str, palin_str) == 0) {
        check = 1;
        print_result(value.nb, nb, i, value.base);
    }
    need_free(str, palin_str, str_two);
    return (check);
}

void palindrome(value_t value)
{
    char *str = transform_base(value.pal, value.base, 0);
    char *str_two = my_strdup(str);
    int check = 0;

    my_revstr(str_two);
    if (my_strcmp(str, str_two) != 0)
        check = 1;
    need_free(str, str_two, NULL);
    if (check == 1)
        my_exit(2, "Error: pal argument isn't a palindrome\n", 84);
    for (int i = 0; i < value.pal; i++) {
        value.nb = i + 1;
        check += palindrome_iteration((i + 1), value);
    }
    value.nb = 0;
    if (value.pal == 0)
        check += palindrome_iteration(0, value);
    value.nb = -1;
    if (check == 0)
        write(1, "no solution\n\0", 13);
}