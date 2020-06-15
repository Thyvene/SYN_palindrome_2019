/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** generic
*/

#ifndef GENERIC_H_
#define GENERIC_H_

#include "my.h"

int my_atoi(char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
/// int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_swap(int *a, int *b);

#endif /* !GENERIC_H_ */
