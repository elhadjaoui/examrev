

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "new_header.h"

	int
main(int ac, char **av)
{
	int		r;
	char	*line;
	int fd;
	line = NULL;
	fd = open(av[1], O_RDONLY);
	while ((r = new_get_next_line(fd,&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s", line);
	free(line);
	line = NULL;
	while(1);
}
