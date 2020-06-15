/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** A function that counts and returns the number of
** characters found in the string passed as parameter.
*/

#include "my.h"

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0')
        a++;
    return (a);
}

