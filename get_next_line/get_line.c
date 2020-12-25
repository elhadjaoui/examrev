#include <unistd.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
int ft_search(char *s)
{
	if (s == NULL)
		return 1;
	while(*s)
	{
		if (*s == '\n')
			return 0;
		s++;
	}
	return 1;
}

int ft_strlen(char *s)
{
	int i = 0;
	if (s == NULL)
		return 0;
	while(s[i])
	{
		i++;
	}
	return i;
}

char *ft_join(char *s1,char *s2)
{
	int i = ft_strlen(s1);
	int j = ft_strlen(s2);
	int k = 0;
	char *re = malloc(i + j + 1 );
	re[i + j] = 0;
	while (i && s1[k])
	{
		re[k] = s1[k];
		k++;
	}	
	k = 0;
	while (j && s2[k])
	{
		re[k + i] = s2[k];
		k++;
	}
	free(s1);
	return re;
}

/*char *ft_sub(char *s)
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
*/
char *ft_sub(char *s)
{
	int i = 0;
	int k = 0;
	char *re;
	if (s = NULL)
	{
		re = malloc(1);
		re[0] = 0;
		return (re);
	}
	while(s[k] && s[k] != '\n')
		k++;
	re = malloc((k + 1) * sizeof(char));
	re[k] = 0;
	while(i < k)
	{
		re[i] = s[i];
		i++;
	}
	return re;

}


/*char *ft_newline(char *s)
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
	free(s);
	return (ss);
}
*/
char *ft_newline(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *re;
	if (s = NULL)
	{
		re = (char*)malloc(1);
		re[0] = 0;
		return (re);
	}
	while(s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\0')
		i=0;
	else {
		j = i+1;
		while(s[i])
		i++;
	}
	re = (char*)malloc(i - j + 1);
	while(j < i)
		 re[k++] = s[j++];
	re[k] = 0;
	free(s);
	return re;
	
	
}

int get_next_line(int fd,char **line)
{
	int r;
	static char *s;
	char *bf;
	r = 1;
	
	*line = NULL;
	bf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while(ft_search(s) && (r = read(fd,bf,BUFFER_SIZE)))
	{
		if (r == -1)
			return -1;
		bf[r] = 0;
		s = ft_join(s,bf);	
	}
	free(bf);
	printf("%s \n", s);
	*line = ft_sub(s);
	s = ft_newline(s);
	if (r = 0)
	{
		free(s);
		return 0;

	}
	return 1;
}
