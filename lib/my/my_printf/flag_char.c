/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_char
*/

#include "my.h"

int flag_char(va_list ap, int i, char *str)
{
    my_putchar(va_arg(ap, int));
    return (i);
}