/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_str
*/

#include "my.h"

int flag_str(va_list ap, int i, char *str)
{
    my_putstr(va_arg(ap, char *));
    return (i);
}