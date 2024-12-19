#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *arr;
    int len;
    int i;

    //Esto sirve para validar que el rango es valido
    //ej: 5-5 no tiene rango
    if(min >= max)
    {
        return (NULL);
    }

    len = max - min;
    
    arr = (int *) malloc(len * sizeof(int));
    
    if(!arr)
    {
        return (NULL);
    }

    i = 0;
    while(i < len)
    {
        arr[i] = min + i;
        i++;
    }

    return(arr);
}

int main()
{
    int min;
    int max;
    int *range;
    int i;
    
    i = 0;
    min = 1;
    max = 5;

    range = ft_range(min, max);
    //esto es solo para verificar que el valor que ingresamos sea valido;
    if (!range)
    {
        printf("El rango no es válido.\n");
        return (1);
    }
    //imprimir los valores del arreglo
    while(i < (max - min))
    {
        printf("%d", range[i]);
        i++;
    }
    free(range);
    return(0);
}