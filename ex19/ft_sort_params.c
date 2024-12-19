#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    compstring(char *s1, char *s2)
{
    while(*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void    ft_print_av(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}
void    sort_av_bubble(int argc, char *av[])
{
    int i;
    int j;
    char *temp;

    i = 1; //porque no queremos comparar el primer elemento [0] el cual es el ejecutable

    while(i < argc)
    {
        j = i + 1; // vamos a comparar av[i] con av[j] el cual va a ser el siguiente de i;
        while(j < argc)
        {
            if(compstring(av[i], av[j]) > 0) // si devuelve un numero mayor a 0 => av[i] es mayor que av[j]
            {//necesitamos intercambiarlos(swap)
                temp = av[i];
                av[i] = av[j];
                av[j] = temp;
            }
            j++; //avanza al siguiente indice para comparar
        }
        i++; // avanza a la siguiente posicion en el bucle de fuera
    }

}
int     main(int argc, char *av[])
{
    int i;
    i = 1; //el 0 es el nombre del programa

    if(argc > 1)
    {
        sort_av_bubble(argc, av);

        while(i < argc)
        {
            ft_print_av(av[i]);
            ft_putchar('\n');
            i++;
        }
    }
    return(0);
}