/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strtrim
*/

#include "my.h"

char *my_strtrim(char const *s)
{
    char const *s_back;

    if (s == NULL)
        return (NULL);
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;
    if (*s == '\0')
        return (my_strnew(0));
    s_back = s + my_strlen(s) - 1;
    while (*s_back == ' ' || *s_back == '\t' || *s_back == '\n')
        s_back--;
    return (my_strsub(s, 0, s_back - s + 1));
}
