/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_int
*/

#include "my.h"

int flag_int(va_list ap, int i, char *str)
{
    my_put_nbr(va_arg(ap, int));
    return (i);
}