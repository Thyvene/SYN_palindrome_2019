/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** A function that copies n characters from a string into another
*/

#include "my.h"

char *my_strncpy(char *dest, const char *src, size_t len)
{
    size_t i;

    i = 0;
    while (i < len && src[i]) {
        dest[i] = src[i];
        i++;
    }
    while (i < len)
        dest[i++] = '\0';
    return (dest);
}
