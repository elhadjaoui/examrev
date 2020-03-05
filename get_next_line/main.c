

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

	int
main(void)
{
	int		r;
	char	*line;
	line = NULL;
	fd = open("simo.rt", O_RDONLY);
	while ((r = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s", line);
	free(line);
	line = NULL;
}
