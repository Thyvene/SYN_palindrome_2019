/*
** EPITECH PROJECT, 2020
** my_lib_include
** File description:
** string.h
*/

#ifndef STRING_H_
#define STRING_H_

#include "my.h"

int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, const char *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, const char *src, size_t len);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_strdup(char const *src);
void *my_memset(void *a, int b, size_t len);
void *my_memorycpy(void *dst, const void *src, size_t n);
char *my_strchr(const char *a, int b);
void my_strdel(char **to_find);
char *my_strsub(char const *s, unsigned int start, size_t len);
void my_putendline(char const *i);
char *my_strrealloc(char *s1, char *s2);
char *my_strnew(size_t size);
char *my_strtrim(char const *s);
int my_str_isequal(char const *s1, char const *s2);

#endif /* !STRING_H_ */
