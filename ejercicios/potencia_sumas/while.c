#include <stdio.h>

int main() {
    int num; // Declaración de la variable num que almacenará el número base.
    int exponente = 0; // Declaración de la variable exponente que almacenará el exponente.
    int resultado = 1; // Inicialización de la variable resultado con 1, que almacenará el resultado de la potencia.

    // Solicitar al usuario que ingrese un número y su exponente
    printf("Ingrese el número y su exponente: ");
    scanf("%d %d", &num, &exponente); // Leer el número y el exponente ingresados por el usuario.

    int i = 0; // Inicialización de la variable de control de bucle i con 0.
    
    // Bucle while para calcular la potencia
    while (i < exponente) { // Mientras i sea menor que el exponente.
        int calcularPotencia = 0; // Declaración de la variable calcularPotencia, que almacenará temporalmente el resultado de la potencia.
        int j = 0; // Inicialización de la variable de control de bucle j con 0.

        // Bucle interno para realizar la multiplicación num veces
        while (j < num) { // Mientras j sea menor que num.
            calcularPotencia += resultado; // Sumar resultado a calcularPotencia.
            j++; // Incrementar j.
        }
        
        resultado = calcularPotencia; // Asignar el valor de calcularPotencia a resultado.
        i++; // Incrementar i.
    }

    // Imprimir el resultado de la potencia
    printf("%d ^ %d = %d\n", num, exponente, resultado); // Imprimir el resultado de la potencia.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
