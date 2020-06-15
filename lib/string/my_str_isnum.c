/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** A function that return 1 if string as passed
** only contain digits and 0.
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= '0' && str[a] <= '9')
            a++;
        else
            return (0);
    }
    return (1);
}
