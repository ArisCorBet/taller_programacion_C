#include <stdio.h>

int main() {
    int numero; // Variable para almacenar el número ingresado por el usuario
    long long factorial = 1; // Variable para almacenar el resultado del factorial

    // Solicita al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero); // Lee el número ingresado por el usuario y lo almacena en la variable 'numero'

    // Verifica que el número sea no negativo
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        // Muestra la serie de multiplicaciones
        printf("%d! = ", numero);

        int i = numero; // Variable de control del bucle

        // Bucle while para calcular el factorial y mostrar la serie
        while (i > 0) {
            factorial *= i; // Multiplica el valor actual del factorial por 'i'
            printf("%d", i); // Muestra el valor de 'i'
            if (i > 1) {
                printf(" * "); // Muestra el símbolo de multiplicación si no es el último número
            }
            i--; // Decrementa la variable de control
        }

        // Muestra el resultado del factorial
        printf(" = %lld\n", factorial);
    }

    return 0; // Termina el programa
}
