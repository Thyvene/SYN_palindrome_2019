/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strnew
*/

#include "my.h"

char *my_strnew(size_t size)
{
    char *str;

    if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
        return (NULL);
    my_memset(str, '\0', size + 1);
    return (str);
}