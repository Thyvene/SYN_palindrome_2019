/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_oct_s
*/

#include "my.h"

int flag_oct_s(va_list ap, int i, char *str)
{
    my_putstr_oct(va_arg(ap, char *));
    return (i);
}