#include <stdio.h>

int main() {
    int inverso = 0; // Variable para almacenar el número inverso
    int num; // Variable para almacenar el número ingresado por el usuario
    int digito; // Variable para almacenar cada dígito del número

    printf("Ingrese un numero: \n");
    scanf("%d", &num); // Leer el número ingresado por el usuario

    for (int i = 0; num > 0; i++) { // Iniciar el bucle for, mientras el número ingresado sea mayor que 0
        digito = num % 10; // Obtener el último dígito del número
        inverso = inverso * 10 + digito; // Construir el número inverso
        num /= 10; // Eliminar el último dígito del número original
    }

    printf("El inverso del numero ingresado es: %d\n", inverso); // Imprimir el número inverso

    return 0; // Indicar que el programa finalizó exitosamente
}
