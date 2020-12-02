#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    int j;
    char s[255];

    i = 0;
    j = 0;
    while (i < 255)
    {
             s[i] = 0;
             i++;
    }
       
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