/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** function that displays the number given as a parameter.
** It must be able to display all the possible values of an int
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int a;
    int b;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    } else {
        b = nb % 10;
        a = nb / 10;
        if (a != 0)
            my_put_nbr(a);
        my_putchar(b + 48);
    }
}