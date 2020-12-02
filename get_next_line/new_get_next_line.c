
#include "new_header.h"




int new_get_next_line(int fd,char **line)
{
	int r;
	char *tline;
	static char *stk;

	r = 1;
	tline  = (char *) malloc(sizeof(char) * BUFFER_SIZE + 1);
	while(ft_search(stk) && (r = read(fd,tline,BUFFER_SIZE)))
	{
		if (r == -1)
			return -1;
		tline[r] = 0;
		stk = ft_join(stk,tline);
	}
	ft_free(tline);
	*line = ft_sub(stk);
	stk = newline(stk);
	if (r == 0)
	{
		ft_free(stk);
			return 0;
	}
	return (1);
}
