
#ifndef NEW_HEADER_H
# define NEW_HEADER_H

#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 2

int ft_len(char *s);
int ft_search(char *s);
char *ft_sub(char *s);
char *ft_join(char *s1,char *s2);
void ft_free(char *s);
int     new_get_next_line(int fd,char **line);
char *newline(char *s);
#endif

