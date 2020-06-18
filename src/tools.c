/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** tools
*/

#include "palindrome.h"

void my_exit(int fd, char *str, int res)
{
    write(fd, str, my_strlen(str));
    exit(res);
}

int transform_arg(char *str, int base)
{
    int res = 0;

    for (int i = 0; str[i]; i++)
        res = res * base + (str[i] - '0');
    return (res);
}

char *transform_base(unsigned int nb, int base, int maj)
{
    char *letter = (maj == 0) ?
        my_strdup("0123456789abcdefghijklmnopqrstuvwxyz\0") :
        my_strdup("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\0");
    unsigned int nbr = nb;
    int size = (nb == 0) ? 1 : 0;
    char *new = (nb == 0) ? my_strdup("0\0") : NULL;

    for (; nbr != 0; size++)
        nbr = nbr / base;
    new = (nb == 0) ? new : malloc(sizeof(char) * (size + 1));
    for (int i = 0; nb != 0; i++) {
        new[i] = letter[nb % base];
        nb = nb / base;
    }
    new[size] = '\0';
    my_revstr(new);
    free(letter);
    return (new);
}