/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** my_putfloat
*/

#include "my.h"

void my_putfloat(double nb)
{
    int i = 0;

    my_put_nbr((int)nb);
    my_putchar('.');
    while (i < 6 && (int)nb % 10 != 0 && (int)(nb * 10) % 10 != 0) {
        nb *= 10;
        my_putchar((int)nb % 10 + 48);
        i++;
    }
}