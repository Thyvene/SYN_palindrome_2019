/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** a function that returns the square root
*/

int my_compute_square_root(int nb)
{
    int a = 0;

    if (nb < 1)
        return (0);
    while (a * a != nb) {
        a = a + 1;
        if (a > nb)
            return (0);
    }
    return (a);
}
