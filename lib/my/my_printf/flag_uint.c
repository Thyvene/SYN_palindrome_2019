/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_uint
*/

#include "my.h"

int flag_uint(va_list ap, int i, char *str)
{
    my_put_nbr(va_arg(ap, unsigned int));
    return (i);
}