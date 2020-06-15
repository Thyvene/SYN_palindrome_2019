/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_oct
*/

#include "my.h"

int flag_oct(va_list ap, int i, char *str)
{
    my_putstr(dec_to_bas(va_arg(ap, int), 8, 0));
    return (i);
}