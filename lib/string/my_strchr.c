/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strchr
*/

#include "my.h"

char *my_strchr(const char *a, int b)
{
    int i;

    i = 0;
    while (a[i])
    {
        if (a[i] == (char)b)
            return ((char *)&a[i]);
        i++;
    }
    if (a[i] == '\0' && b == '\0')
        return ((char *)&a[i]);
    return (NULL);
}