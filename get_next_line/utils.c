#include "new_header.h"

int ft_len(char *s)
{
	int i;

	if (s == NULL)
	return 0;
	i = 0;
	while (s[i])
	i++;
	return i;
}

int ft_search(char *s)
{
	if (!s)
		return 1;
	while(*s)
	{
		if (*s == '\n')
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

	if (s == NULL)
	{
		new_s = (char*) malloc(1);
		new_s[0] = 0;
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
		sum[i] = s1[i];
	ft_free(s1);
	return (sum);
}
char *newline(char *s)
{
	int x;
	int y;
	int z;
	char *ss;

	x = 0;
	y = 0;
	z = 0;
	if (s == NULL)
	{
		ss = (char*) malloc(1);
		ss[0] = 0;
		return ss;
	}
	while(s[x] != '\n' && s[x] != '\0')
	{
		x++;
	}
	if (s[x] == '\0')
		x = 0;
	else
	{
		y = x + 1;
		while (s[x] != '\0')
			x++;
	}
	ss = (char *)malloc(x - y + 1);
	while(y < x)
		ss[z++] = s[y++];
	ss[z] = 0;
	ft_free(s);
	return (ss);
}

void ft_free(char *s)
{
	free(s);
	s = NULL;
}
