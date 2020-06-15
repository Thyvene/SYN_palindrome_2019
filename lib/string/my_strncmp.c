/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** A function to reproduce behavior of the my_strncmp function
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;

    while (a < n) {
        if (s1[a] > s2[a])
            return (1);
        else if (s1[a] < s2[a])
            return (-1);
        if ((n - 1) == a)
            return (0);
        a++;
    }
    return (0);
}