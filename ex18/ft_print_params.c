void ft_putchar(char c);

void ft_print(char *str)
{
    int i;
    i = 0;

    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int main(int argc, char *av[])
{
    int j;
    j = 1;

    while (j < argc)
    {
        ft_print(av[j]);
        ft_putchar('\n'); 
        j++;
    }
}

/*
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
}*/