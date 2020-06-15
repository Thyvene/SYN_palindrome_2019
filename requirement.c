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