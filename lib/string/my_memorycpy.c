/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019
** File description:
** my_memorycpy
*/

#include "my.h"

void *my_memorycpy(void *dst, const void *src, size_t n)
{
    size_t            i;
    unsigned char    *pdst;
    unsigned char    *psrc;

    i = 0;
    if (dst == NULL && src == NULL)
        return (NULL);
    pdst = (unsigned char *)dst;
    psrc = (unsigned char *)src;
    while (i < n)
        pdst[i++] = *psrc++;
    return (dst);
}