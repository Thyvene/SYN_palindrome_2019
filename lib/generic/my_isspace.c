/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_isspace
*/

#include "my.h"

int my_isspace(int i)
{
    if (i == ' ' || (i >= 9 && i <= 13))
        return (1);
    return (0);
}