#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(int argc, char *av[])
{
    int i;
    int j;

    j = 1;
    while(j < argc -1)
    {
        return ;
    }

}