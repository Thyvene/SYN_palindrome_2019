/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** A function that puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 65 && str[a] <= 90)
            str[a] = str[a] - 32;
        a++;
    }
    return (str);
}