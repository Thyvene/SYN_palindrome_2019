/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strdel
*/

#include "my.h"

void my_strdel(char **to_find)
{
    if (to_find != NULL)
    {
        free(*to_find);
        *to_find = NULL;
    }
}