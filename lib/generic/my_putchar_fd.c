/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** my_putchar_fd
*/

#include "my.h"

void my_putchar_for_fd(char c, int fd)
{
    write(fd, &c, 1);
}