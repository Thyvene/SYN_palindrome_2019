/*
** EPITECH PROJECT, 2019
** my_str_isprintable.c
** File description:
** A function that returns 1 if the string passed
** only printable characters and 0
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] > 32 && str[a] < 127)
            a++;
        else
            return (0);
    }
    return (1);
}
