/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** Atoi function takes a string (which represents an integer)
** as an argument and returns its value of type int
*/

int my_atoi(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res = res + str[i] - '\0';
    }

    return (res);
}