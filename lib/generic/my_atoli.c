/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** my_atoli
*/

#include "my.h"

long my_atoli(const char *str)
{
    long     i = 0;
    long    nb = 0;
    int is_neg = 0;

    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
        str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-')
        is_neg = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9') {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    if (is_neg)
        return (-nb);
    return (nb);
}