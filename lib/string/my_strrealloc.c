/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strrealloc
*/

#include "my.h"

char *my_strrealloc(char *s1, char *s2)
{
    char *new;

    new = my_strjoin(s1, s2);
    my_strdel(&s1);
    return (new);
}
