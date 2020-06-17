/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** A function that concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;

    for (a = 0; dest[a] != '\0'; a++);
    for (b = 0; src[b] != '\0'; b++) {
        dest[a + b] = src[b];
    }
    dest[a + b] = '\0';
    return (dest);
}