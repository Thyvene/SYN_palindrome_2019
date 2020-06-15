/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_putendline
*/

#include "my.h"

void my_putendline(char const *i)
{
    my_putstr(i);
    my_putchar('\n');
}