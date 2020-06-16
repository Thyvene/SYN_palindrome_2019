/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** Atoi function takes a string (which represents an integer)
** as an argument and returns its value of type int
*/

#include "my.h"
#include <ctype.h>

int my_atoi(char *str)
{
    int nb = 0;

    if (str == NULL || str[0] == '\0') {
        write(2, "Error: void string\n\0", 21);
        exit(84);
    }
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]) == 0) {
            write(2, "Error: bad option\n\0", 20);
            exit(84);
        }
        nb = (nb * 10) + (str[i] - '0');
    }
    return (nb);
}