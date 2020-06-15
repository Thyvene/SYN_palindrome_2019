/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** requirement
*/

#include "my.h"

int my_factrec_synthesis(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    int i = 0;

    if (nb < 0)
        return (-1);
    else if (nb == 0)
        return (0);
    for (; nb > (i * i) && i < 46330; i += 10);
    i -= 10;
    for (; nb > (i * i) && i < 46341; i++);
    if (nb == (i * i))
        return (i);
    return (-1);
}