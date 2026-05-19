/*header*/

#include "get_next_line_bonus.h"

char *ft_strjoin(char *s1, char *s2)
{
    char    *res;
    int i;
    int j;

    if (!s2)
        return (NULL);
    if (!s1)
    {
        s1 = malloc(1);
        if (!s1)
            return (NULL);
        s1[0] = '\0';
    }
    res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        res[i + j] = s2[j];
        j++;
    }
    res[i + j] = '\0';
    free (s1);
    return (res);
}

int ft_strlen(char *str)
{
    int     i;

    if (!str)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if ((char)c== '\0')
        return ((char *)&s[i]);
    return (NULL);
}