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
        return (84);
    }
    if (av[1][0] == 'f') {
        printf("factorial of %d is %d\n", atoi(av[2]),
            my_factrec_synthesis(atoi(av[2])));
    }
}