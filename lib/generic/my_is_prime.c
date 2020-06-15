/*
** EPITECH PROJECT, 2019
** my_is_prime.c
** File description:
** Function of my_is_prime
*/

int my_is_prime(int nb)
{
    int resultat = 0;

    if (nb <= 1)
        return (0);
    for (int a; a < nb; a += 4)
        if (nb % a == 0)
            resultat++;
    if (resultat > 1)
        return (0);
    else
        return (1);
}
