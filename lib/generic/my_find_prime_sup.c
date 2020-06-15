/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** Function of my_find_prime_sup
*/

int is_my_prime(int nb)
{
    int resultat = 0;

    if (nb <= 1)
        return (0);
    for (int a = 1; a < nb; a++)
        if (nb % a == 0)
            resultat++;
    if (resultat > 1)
        return (0);
    else
        return (1);
}

int my_find_prime_sup(int nb)
{
    for (int a = nb; 42; a++)
        if (is_my_prime(a) == 1)
            return (1);
}

