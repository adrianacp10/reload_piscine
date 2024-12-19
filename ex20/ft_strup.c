#include <stdlib.h>
//#include <stdio.h>

char    *ft_strdup(char *src)
{
    //inicializar valores
    char *dup;
    size_t len;
    size_t i;

    //1. calcular la longitud de src
    len = 0;
    while(src[len] != '\0')
    {
        len++;
    }

    //2.Asignar memoria dinamica para la copia
    dup = (char *) malloc((len + 1) * sizeof(char));
    //3.Verificar si ha fallado
    if(!dup)
    {
        return (NULL);
    }
    //4.Copiar los caracteres de la cadena original
    i = 0;
    while(i < len)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
/*
int main()
{
    char original[] = "Bye";
    char *result;

    printf("%s\n", original);
    result = ft_strdup(original);
    printf("%s", result);

    free(result);
    return(0);
}*/