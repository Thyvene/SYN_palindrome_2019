/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_memset
*/

#include "my.h"

void *my_memset(void *a, int b, size_t len)
{
    size_t    i;
    char    *pb;

    i = 0;
    pb = (char *)a;
    while (i < len)
        pb[i++] = (unsigned char)b;
    return (a);
}