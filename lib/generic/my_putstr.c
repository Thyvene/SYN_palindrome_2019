/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** A function that displays, one-by-one, the characters of a string.
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        my_putchar(str[a]);
    return (0);
}