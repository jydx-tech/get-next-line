/*header*/

#include "get_next_line.h"

char *ft_read(int fd, char *save)
{
    char *is_reading;
    int nb_octet;
    is_reading = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (!is_reading)
            return (NULL);
    nb_octet = read(fd, is_reading, BUFFER_SIZE);
        if (nb_octet < 0)
        {
            free (is_reading);
            free (save);
            return (NULL);
        }
    save = ft_strjoin(is_reading, save);
    return (save);
}

char *ft_line(char *save)
{
    char *line;
    int i;

    i = 0;
    while (save[i] && !save[i] = '\n')
        i++;
    line = malloc(sizeof(char) * (i + 2));
    if (!line)
        return (NULL);
    i = 0;
    while (save[i] && !save[i] = '\n')
    { 
        line[i] = save[i];
        i++;
    }
    line[i] = '\n';
    line[i + 1] = '\0';
    return (line); 
}

char *ft_save(char *save)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    while (save[i] && !save[i] = '\n')
        i++;
    if (!save[i])
    {
        free (save);
        return (NULL);
    }
    str = malloc(sizeof(char) * (ft_strlen(save) - i + 1));
    if (!str)
    {
        free (str);
        return (NULL);
    }
    i++;
    while (save[i])
        str[j++] = save[i++];
    str[j] = '\0';
    free (save);
    return (str);
}

char *get_next_line(int fd)
{
    char    *line;
    static char *save;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    save = ft_read(fd, save);
    if (!save)
        return (NULL);
    line = ft_line(save);
    save = ft_save(save);
    return (line);
}
