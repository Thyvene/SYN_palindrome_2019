/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** main
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    value_t value = return_option(ac, av);

    if (value.nb != -1)
        iteration(value.nb, value);
    else
        palindrome(value);
    return (0);
}