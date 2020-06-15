/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** my_str_isequal
*/

#include "my.h"

int my_str_isequal(char const *s1, char const *s2)
{
    if (s1 && s2) {
        if (my_strcmp(s1, s2) == 0)
            return (1);
    }
    return (0);
}