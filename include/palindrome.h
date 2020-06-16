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


#endif /* !PALINDROME_H_ */
