/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** A function that returns 1 if the string passed
** only alphanetical characters and 0
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 'a' && str[a] <= 'z')
            a++;
        else if (str[a] >= 'A' && str[a] <= 'Z')
            a++;
        else
            return (0);
    }
    return (1);
}
