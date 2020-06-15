/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** my_putstr_fd
*/

#include "my.h"

void my_putstr_fd(char const *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0') {
        my_putchar_for_fd(s[i], fd);
        i++;
    }
}