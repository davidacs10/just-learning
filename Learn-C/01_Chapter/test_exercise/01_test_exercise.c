// Verifique que la expresión getchar ( ) ! = EOF es 0 o 1.

#include <stdio.h>

int main()
{
    int result;
    printf("Introduce un caracter (Ctrl+D para EOF): ");
    result = (getchar() != EOF);
    printf("El resultado de la expresion getchar() != EOF es: %d\n", result);
    return 0;
}
