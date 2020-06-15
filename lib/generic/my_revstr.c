/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** A function that reverse a string
*/

char *my_revstr(char *str)
{
    int a = 0;
    int aa = 0;
    char *reverse = str;
    char temp;
    int b = 0;

    while (str[a] != '\0') {
        a++;
    }
    a--;
    b = a/2;
    while (a > b) {
        temp = str[aa];
        reverse[aa] = str[a];
        reverse[a] = temp;
        a--;
        aa++;
    }
    str = reverse;
    return (str);
}