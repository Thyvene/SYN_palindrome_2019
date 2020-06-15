/*
** EPITECH PROJECT, 2019
** my_str_issupper.c
** File description:
** A function that returns 1 if the string passed
** only uppercase alphabetical characters and 0
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 'A' && str[a] <= 'Z')
            a++;
        else
            return (0);
    }
    return (1);
}
