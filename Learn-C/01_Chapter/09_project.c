#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_ATTEMPS 10

int main(void)
{
    // Limite inferior
    int lb = 97;
    // Limite superior
    int ub = 122;

    // Inicializamos srand con la semilla en time para que cada vez nos de un valor distinto.
    srand(time(NULL));

    /*Inicializamos una variable que almacenara nuestro numero de manera aleatoria.
    realizando el siguiente calculo que primero va a restar el limite superior - el limite inferior + 1
    esto seria (122 - 97 + 1) el resultado seria 26 el cual al sacar el modulo que vendria siendo la division
    del numero almacenado en rand() % 26. Esto nos asegura que nuestro residuo de la division estara entre 0 y 25
    al cual le sumaremos el limite inferior + el residuo lo cual nos generara un numero entre 97 y 122 que en ASCII
    vendrian siendo las letras del abecedario.
    */
    int random_letter = lb + rand() % (ub - lb + 1);
    // Creamos nuestras variables c almacena nuestro caracter. i sera para las iteraciones del programa.
    int c, i;

    // Bienvenida y presentacion del juego.
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("Bienvenido al juego de adivinar la letra.\n");
    printf("Debes adivinar una letra entre 'a' y 'z'.\n");
    printf("Tienes un maximo de %d intentos.\n", MAX_ATTEMPS);
    printf("-------------------------------------------------------------------------------------------------\n");

    // Bucle for para que nuestro juego se ejecute un numero de veces.
    for (i = 1; i <= MAX_ATTEMPS;)
    {
        // Contador de rondas
        printf("Ronda %d\n", i);

        // Nuesta variable c junto con la funcion tolower() que en dado caso que ingresemos una letra mayuscula
        // esta funcion la convertira a minuscula. La funcion getchar() que nos permitira ingresa un caracter por consola
        c = tolower(getchar());
        // Otro getchar() para omitir el salto de linea '\n' y se evite la duplicacion de iteraciones
        getchar();

        /* Nuestra variable de ia que a diferencia de la anterior esta se ejecutara cada vez que el bucle
        haga una iteracion lo que nos dara un caracter diferente cada iteracion.*/
        int ia_random_letter = lb + rand() % (ub - lb + 1);

        // Esta condicion es para controlar que el usuario solo pueda ingresar letras y no digitos u otros caracteres como signos '!'
        if (c < 'a' || c > 'z')
        {
            printf("Por favor ingrese una letra de entre la 'a' y la 'z'\n");
            continue;
        }
        // En caso de ganar el usuario se ejecutara esta condicion.
        if (c == random_letter)
        {
            printf("Haz ganado el juego con la letra '%c'.\n", c);
            break;
        }
        // En caso de ganar la IA se ejecutara esta condicion.
        else if (ia_random_letter == random_letter)
        {
            printf("La IA ha ganado el juego con la letra '%c'\n", ia_random_letter);
            break;
        }
        // Condicion if en caso de que la letra sea mayor. else para cuando la letra sea menor.
        if (c > random_letter)
            printf("Tu letra '%c' es mayor (>) a la que necesitas.\n", c);
        else
            printf("Tu letra '%c' es menor (<) a la que necesitas.\n", c);

        // Condicion if en caso de que la letra sea mayor. else para cuando la letra sea menor.
        if (ia_random_letter > random_letter)
            printf("La IA ha seleccionado la letra '%c' y es mayor (>) a la que necesita.\n", ia_random_letter);
        else
            printf("La IA ha seleccionado la letra '%c' y es menor (<) a la que necesita.\n", ia_random_letter);

        // En caso de que se complete el numero de rondas y no haya un ganador.
        if (i == MAX_ATTEMPS)
            printf("Nadie ha ganado. Es un empate\n");
        /*El incremental de la variable i. La colocamos al final
        para que incremente la ronda una vez se haya cumplido alguna de las condiciones anteriores.*/
        ++i;
        printf("-------------------------------------------------------------------------------------------------\n");
    }
    printf("La letra correcta es: %c\n", random_letter);
    printf("-------------------------------------------------------------------------------------------------\n");
}

/* Resources
https://www.w3schools.com/c/ref_stdlib_srand.php
https://www.geeksforgeeks.org/c-rand-function/
https://www.geeksforgeeks.org/c-for-loop/
https://www.w3schools.com/c/c_ref_stdlib.php
https://www.geeksforgeeks.org/decision-making-c-cpp/?ref=shm
https://www.ascii-code.com/
*/