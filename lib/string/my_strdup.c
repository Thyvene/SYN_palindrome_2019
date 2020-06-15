/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** task01
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *dest;
    int i;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    if (dest == NULL)
        exit (1);
    else
        return (dest);
    free(dest);
}