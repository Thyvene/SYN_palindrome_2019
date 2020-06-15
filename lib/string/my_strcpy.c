/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** A function that copies a string into another
*/

char *my_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}