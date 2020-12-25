
#include "get_next_line.h"
#include <stdio.h>
int	ft_free(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (1);
}

int	get_next_line(char **line)
{
	ssize_t		r;
	char		*t;
	static char	*stk;

	t = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	//r = 1;
	while (ft_search(stk) && (r = read(fd, t, BUFFER_SIZE)) != 0)
	{
		if (r == -1)
			return -1;
		t[r] = '\0';
		stk = ft_join(stk, t);
	}
	ft_free(&t);
	*line = ft_sub(stk);
	stk = ft_from_newline(stk); 
	if (r == 0 && ft_free(&stk))
		return (0);
	return (1);
}
