/*
** EPITECH PROJECT, 2020
** get_next_line.c
** File description:
** A function that return the value of a file descriptor
*/

#include "my.h"

static int temp_check(char **temp, char **line, int end)
{
    char    *del_temp;
    char    *nlp;
    *line = my_strnew(0);
    del_temp = *temp;
    nlp = my_strchr(*temp, '\n');
    if (!nlp && my_strlen(*temp) > 0) {
        *line = my_strrealloc(*line, *temp);
        if (end == 0)
            my_strdel(temp);
        return (1);
    }
    else if (nlp) {
        *nlp = '\0';
        *line = my_strrealloc(*line, *temp);
        *temp = my_strdup(nlp + 1);
        my_strdel(&del_temp);
        if (**temp == '\0')
            my_strdel(temp);
    }
    return (1);
}

static int buff_rw(char **temp, int fd)
{
    char buff[READ_SIZE + 1];
    int  end;

    end = 0;
    if (!*temp)
        if (!(*temp = my_strnew(0)))
            return (-1);
    if (!my_strchr(*temp, '\n'))
        while ((end = read(fd, buff, READ_SIZE)) > 0) {
            buff[end] = '\0';
            if (!(*temp = my_strrealloc(*temp, buff)))
                return (-1);
            if (my_strchr(buff, '\n'))
                break ;
        }
    return (end);
}

int get_next_line(const int fd, char **line)
{
    static char *temp;
    int           end;

    if (fd < 0 || !line)
        return (-1);
    else if ((end = buff_rw(&temp, fd)) < 0)
        return (-1);
    else if (end == 0 && (temp == NULL || *temp == '\0'))
        return (0);
    return (temp_check(&temp, line, end));
}