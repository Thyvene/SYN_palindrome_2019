/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_ptr
*/

#include "my.h"

int flag_ptr(va_list ap, int i, char *str)
{
    my_putstr("0x");
    my_putstr(dec_to_bas((long)(va_arg(ap, void *)), 16, 0));
    return (i);
}