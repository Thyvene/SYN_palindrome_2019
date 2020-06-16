/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include "my.h"

typedef struct value_s {
    int nb;
    int pal;
    int base;
    int imin;
    int imax;
} value_t;

/*--Requirements functions--*/
int my_factrec_synthesis(int nb);
int my_squareroot_synthesis(int nb);
/*--Requirements functions end--*/

/*--Parser--*/
value_t return_option(int ac, char **av);
/*--Parser end--*/

/*--Tools functions--*/
void my_exit(int fd, char *str, int res);
int power(int nb, int pow);
int transform_arg(char *str, int base);
char *transform_base(unsigned int nb, int base, int maj);
/*--Tools functions end--*/

/*--Palindrome functions--*/
void iteration(int nb, value_t value);
void palindrome(value_t value);
/*--Palindrome functions endd-*/

#endif /* !PALINDROME_H_ */