#include <stdlib.h> // Para malloc y free

char *ft_strdup(const char *str) {
    int i = 0;
    char *dup;

    // Calcular la longitud de la cadena original
    while (str[i] != '\0')
        i++;

    // Reservar memoria para la nueva cadena (+1 para incluir el carácter '\0')
    dup = (char *)malloc((i + 1) * sizeof(char));
    if (dup == NULL) // Si malloc falla, devolver NULL
        return NULL;

    // Copiar cada carácter de la cadena original a la nueva cadena
    i = 0; // Reiniciamos `i` para usarlo en la copia
    while (str[i] != '\0') {
        dup[i] = str[i]; // Copiamos carácter por carácter
        i++;
    }
    dup[i] = '\0'; // Añadimos el carácter nulo al final de la nueva cadena

    return dup; // Retornamos el puntero a la nueva cadena
}
