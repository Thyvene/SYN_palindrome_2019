/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** A function to reproduce behavior of the my_strstr function
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int value = 0;

    if (str == NULL || to_find == NULL)
        return (0);
    for (int b = 0; str[b] && to_find[a]; b++) {
        if (str[b] == to_find[a]) {
            if (a == 0)
                value = b;
            a++;
        } else
            a = 0;
    }
    if (to_find[a] == '\0')
        return (&str[value]);
    else
        return (0);
}
