#include <stdio.h>

int main() {
    int numero; // Declaración de la variable num que almacenará el número base.
    int exponente = 0; // Declaración de la variable exponente que almacenará el exponente.
    int resultado = 1; // Inicialización de la variable resultado con 1, que almacenará el resultado de la potencia.

     // Leer la base y el exponente
    printf("Ingresa un numero: "); // Imprimir mensaje solicitando al usuario ingresar la base.
    scanf("%d", &numero); // Leer el numero ingresado por el usuario y almacenarla en la variable base.
    printf("Ingresa el exponente: "); // Imprimir mensaje solicitando al usuario ingresar el exponente.
    scanf("%d", &exponente); // Leer el exponente ingresado por el usuario y almacenarlo en la variable exponente.

    int i = 0; // Inicialización de la variable de control de bucle i con 0.
    
    // Bucle while para calcular la potencia
    while (i < exponente) { // Mientras i sea menor que el exponente.
        int calcularPotencia = 0; // Declaración de la variable calcularPotencia, que almacenará temporalmente el resultado de la potencia.
        int j = 0; // Inicialización de la variable de control de bucle j con 0.

        // Bucle interno para realizar la multiplicación num veces
        while (j < numero) { // Mientras j sea menor que num.
            calcularPotencia += resultado; // Sumar resultado a calcularPotencia.
            j++; // Incrementar j.
        }
        
        resultado = calcularPotencia; // Asignar el valor de calcularPotencia a resultado.
        i++; // Incrementar i.
    }

    // Imprimir el resultado de la potencia
    printf("%d ^ %d = %d\n", numero, exponente, resultado); // Imprimir el resultado de la potencia.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
