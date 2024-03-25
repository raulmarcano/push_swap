#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

#include <stdio.h>

char* eliminarCeros(char *cadena)
{
    int i = 0;
    int j = 0;
    int cap = 0;
    int numEncontrado = 0; // Variable para controlar si se ha encontrado algún número
    
    // Verifica si el número es negativo
    if (cadena[i] == '-') {
        cap = 1;
        i++;
    }
    
    while(cadena[i] != '\0')
    {
        if (cadena[i] == '0' && !numEncontrado) {
            i++;
            continue;
        }
        if (cadena[i] >= '1' && cadena[i] <= '9') {
            numEncontrado = 1; // Se ha encontrado un número
        }
        cadena[j++] = cadena[i++];
    }
    
    // Si no se ha encontrado ningún número, dejamos un '0' en la cadena
    if (!numEncontrado) {
        cadena[j++] = '0';
    }
    
    // Establece el final de la cadena
    cadena[j] = '\0';
    
    // Si el número es negativo, se coloca el '-' al principio de la cadena
    if (cap == 1 && cadena[0] != '-') {
        for (int k = j; k >= 0; k--) {
            cadena[k + 1] = cadena[k];
        }
        cadena[0] = '-';
    }
    
    return cadena;
}

int main() {
    char cadena[] = "+000040";
    printf("Cadena original: %s\n", cadena);
    char *resultado = eliminarCeros(cadena);
    printf("Cadena sin ceros redundantes: %s\n", resultado);
    return 0;
}
