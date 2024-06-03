#include <stdio.h>

int main() {
    int num; // Declaración de la variable num que almacenará el número base.
    int exponente = 0; // Declaración de la variable exponente que almacenará el exponente.
    int result = 1; // Inicialización de la variable result con 1, que almacenará el resultado de la potencia.

    // Solicitar al usuario que ingrese un número y el exponente
    printf("Ingrese un número y el exponente: ");
    scanf("%d %d", &num, &exponente); // Leer el número y el exponente ingresados por el usuario.

    // Bucle for para calcular la potencia
    for (int i = 0; i < exponente; i++) { // Iterar desde 0 hasta el exponente (no inclusive).
        int calcularPotencia = 0; // Declaración de la variable calcularPotencia, que almacenará temporalmente el resultado de la potencia.

        // Bucle anidado para realizar la multiplicación num veces
        for (int j = 0; j < num; j++) { // Iterar num veces.
            calcularPotencia += result; // Sumar result a calcularPotencia num veces.
        }
        
        result = calcularPotencia; // Asignar el valor de calcularPotencia a result.
    }

    // Imprimir el resultado de la potencia
    printf("%d^%d = %d\n", num, exponente, result); // Imprimir el resultado de la potencia.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
