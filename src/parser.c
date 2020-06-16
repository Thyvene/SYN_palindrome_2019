/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** parser
*/

#include "palindrome.h"

static int parse_flag(int nb_flag, value_t *value, char *arg)
{
    switch (nb_flag) {
        case 0:
            info->nb = my_atoi(arg);
            break;
        case 1:
            info->pal = my_atoi(arg);
            break;
        case 2:
            info->base = my_atoi(arg);
            break;
        case 3:
            info->imin = my_atoi(arg);
            break;
        case 4:
            info->imax = my_atoi(arg);
            break;
        default:
            return (84);
    }
    return (0);
}

static void bringflag(char **av, value_t *value, int *i)
{
    char flag[5][6] = {"-n\0", "-p\0", "-b\0", "-imin\0", "-imax\0"};

    for (int j = 0; j < 5; j++)
        if (my_strcmp(av[*i], flag[j]) == 0) {
            parse_flag(j, value, av[*i + 1]);
            *i += 1;
            return;
        }
    write(2, "Error: bad option\n\0", 20);
    exit(84);
}

value_t return_option(int ac, char **av)
{
    value_t value = {-1, -1, 10, 0, 100};

    if ((ac % 2) == 0 || ac == 1)
        write(2, "Error: bad number of option\n\0", 30);
        exit(84);
    for (int i = 1; i < ac; i++) {
        bringflag(av, &value, &i);
    }
    if ((value.nb == -1 && value.pal == -1) ||
        (value.nb != -1 && value.pal != -1) || value.base < 2 ||
        value.base > 10 || value.imin < 0 || value.imax < 0 ||
        value.imin > value.imax)
        write(2, "Error: bad option\n\0", 20);
        exit(84);
    return (value);
}