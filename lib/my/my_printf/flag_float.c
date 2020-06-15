/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_float
*/

#include "my.h"

int flag_float(va_list ap, int i, char *str)
{
    my_putfloat(va_arg(ap, double));
    return (i);
}