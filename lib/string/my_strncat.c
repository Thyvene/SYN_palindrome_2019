/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** A function that concatenates n characters
** of the src string to the end of the dest
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    for (a = 0; dest[a] != '\0'; a++);
    for (b = 0; src[b] != '\0' && b < nb; b++)
        dest[a + b] = src[b];
    dest[a + b] = '\0';
    return (dest);
}

