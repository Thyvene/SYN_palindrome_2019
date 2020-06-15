/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_strsub
*/

#include "my.h"

char *my_strsub(char const *s, unsigned int start, size_t len)
{
    char        *dest;
    size_t        i;

    i = 0;
    if (s == NULL)
        return (NULL);
    if (start > (unsigned int)my_strlen(s))
        return (NULL);
    if (*s == '\0' || s == NULL)
        return (NULL);
    dest = (char *)malloc(sizeof(*s) * (len + 1));
    if (dest == NULL)
        return (NULL);
    while (i < len && s[start])
    {
        dest[i++] = s[start++];
    }
    dest[i] = '\0';
    return (dest);
}