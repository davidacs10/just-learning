// Tambien podemos usar double y for para realizar el ejercicio de contador de caracteres.
#include <stdio.h>

int main(void)
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // El cuerpo del for no puede estar vacio por eso se coloca un ;
    printf("%.0f\n", nc);

    return 0;
}
