/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** A function to reproduce behavior of the my_strcmp function
*/

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;

    while (s1) {
        if (s1[a] > s2[a])
            return (1);
        else if (s1[a] < s2[a])
            return (-1);
        if (s1[a] == '\0')
            return (0);
        a++;
    }
    return (0);
}