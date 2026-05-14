/*header*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
char *ft_strchr(const char *s, int c);
char	*get_next_line(int fd);


#endif