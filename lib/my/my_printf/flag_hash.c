/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** flag_hash
*/

#include "my.h"

int flag_hash(va_list ap, int i, char *str)
{
    i++;
    flag_t flag_hash[] = {
        ['o'] = flag_hash_oct,
        ['x'] = flag_hash_uhex,
        ['X'] = flag_hash_lhex,
        ['b'] = flag_hash_bin,
    };
    i = flag_hash[str[i]](ap, i, str);
    return (i);
}