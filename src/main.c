/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** main
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    if (ac != 3)
    {
        my_printf("Need 2 args\n");
        return (0);
    }
    if (av[1][0] == 'f') {
        printf("factorial of %d is %d\n", my_atoi(av[2]),
            my_factrec_synthesis(my_atoi(av[2])));
    }
    if (av[1][0] == 's') {
        printf("square root of %d is %d\n", my_atoi(av[2]),
            my_squareroot_synthesis(my_atoi(av[2])));
    }
}