/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_sig
*/

#include "my.h"

int flag_sig(va_list ap, int i, char *str)
{
    my_put_nbr(va_arg(ap, int));
    return (i);
}