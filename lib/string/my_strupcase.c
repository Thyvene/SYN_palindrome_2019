/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** A function that puts every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 97 && str[a] <= 122)
            str[a] = str[a] - 32;
        a++;
    }
    return (str);
}