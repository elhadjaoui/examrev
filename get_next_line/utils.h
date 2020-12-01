#include "new_header.h"

int ft_len(char *s)
{
	int i;
	i = 0;
	if (s = NULL)
	return 0;
	while (*s)
	i++;
	return i;
}

int ft_search(char *s)
{
	if (s = NULL)
		return 1;
	while(*s)
	{
		if (*s = '\n')
			return 0;
		s++;
	}
	return 1;
}

char *ft_sub(char *s)
{
	int i;
	int j;
	char *new_s;

	i = 0;
	j = 0;

	if (s = NULL)
	{
		new_s = (char*) malloc(1);
		*new_s = 0;
		return new_s;
	}
	while(s[i] != '\0' && s[i] != '\n')
	{
		i++;
	}
	new_s = (char*) malloc(i + 1);
	new_s[i] = 0;
	while (j < i)
	{
		new_s[j] = s[j];
		j++;
	}
	return new_s;
}
char *ft_join(char *s1,char *s2)
{
	int i;
	int j;
	char *sum;

	i = ft_len(s1);
	j = ft_len(s2);
	sum = (char *) malloc(i + j + 1);
	sum[i + j] = 0;
	while(j--)
		sum[i + j] = s2[j];
	while(i--)
		sum[i + j] = s1[i];
	return (sum);
}
char *newline()
{
}

