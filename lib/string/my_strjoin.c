/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strjoin
*/

#include "my.h"

char *my_strjoin(char const *s1, char const *s2)
{
    int     len = 0;
    char *newstring;
    char      *temp;
    if (!s1 || !s2)
        return (NULL);
    len = my_strlen(s1) + my_strlen(s2);
    if (!(newstring = (char *)malloc(sizeof(*newstring) * (len + 1))))
        return (NULL);
    temp = newstring;
    while (*s1) {
        *newstring = *s1++;
        newstring++;
    }
    while (*s2) {
        *newstring = *s2++;
        newstring++;
    }
    *newstring = '\0';
    newstring = temp;
    return (newstring);
}