#include <unistd.h>

int main (int ac, char **av)
{
    int j;
    char s[255] = {0};

    j = 0;
    if (ac == 3)
    {
        while (av[2][j])
        {
                 if (s[(unsigned char)av[2][j]] == 0)
			 s[(unsigned char)av[2][j]] = 1;
		 j++;
        }
        j = 0;
        while (av[1][j])
        {
           if (s[(unsigned char)av[1][j]] == 1 )
                {
                    write(1,&av[1][j],1);
                    s[(unsigned char)av[1][j]] = 0;
                }
            j++;
        }
    }
    write(1,"\n",1);
    return(1);
}
