/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_err
*/

#include "my.h"

int flag_err(va_list ap, int i, char *str)
{
    my_putstr(va_arg(ap, char *));
    return (i);
}