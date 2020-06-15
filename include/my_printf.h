/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** my_printf
*/

#include "my.h"

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

/*--my_printf functions--*/
int flag_bin(va_list ap, int i, char *str);
int flag_char(va_list ap, int i, char *str);
int flag_err(va_list ap, int i, char *str);
int flag_float(va_list ap, int i, char *str);
int flag_hash_bin(va_list ap, int i, char *str);
int flag_hash_uhex(va_list ap, int i, char *str);
int flag_hash_lhex(va_list ap, int i, char *str);
int flag_hash_oct(va_list ap, int i, char *str);
int flag_hash(va_list ap, int i, char *str);
int flag_hex(va_list ap, int i, char *str);
int flag_int(va_list ap, int i, char *str);
int flag_mod(va_list ap, int i, char *str);
int flag_oct_s(va_list ap, int i, char *str);
int flag_oct(va_list ap, int i, char *str);
int flag_ptr(va_list ap, int i, char *str);
int flag_sig(va_list ap, int i, char *str);
int flag_str(va_list ap, int i, char *str);
int flag_uint(va_list ap, int i, char *str);

char *dec_bin(int nb);
char *dec_hex(int nb);
char *dec_oct(int nb, int s);
int int_char_len(int nb);
char *end_oct(char *dest, int *index, int s);
char *dec_to_bas(int nb, int bas, int s);
void my_putfloat(double nb);
void my_putstr_oct(char *str);

typedef int (*flag_t)(va_list ap, int i, char *str);
int check_flags(va_list ap, char *str, int i);
int flag_valid(char c);
int my_printf(char *str, ...);
/*--my_printf functions end--*/

#endif /* !MY_PRINTF_H_ */
