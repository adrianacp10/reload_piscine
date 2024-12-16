#include <unistd.h>

int main(int argc, char *av[])
{
    int i;
    int j;

    j = 1;
    while(j < argc)
    {
        i = 0;
        while(av[j][i])
        {
            write(1, av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    return(0);
}