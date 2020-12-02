#include <stdlib.h>
#include <stdio.h>

char *newline(char *s)
{
	int x;
	int y;
	int z;
	char *ss;
	x = 0;
	y = 0;
	z = 0;
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
	//free(s);
	return (ss);

}

int main()
{
	char *s = "qwertyuio\nabcd\0zxcvb";
	char *x;

	x = newline(s);
	printf("%s\n",x);
}
