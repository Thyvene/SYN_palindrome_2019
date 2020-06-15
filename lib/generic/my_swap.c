/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** A function that swaps the content of two integers.
*/

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
