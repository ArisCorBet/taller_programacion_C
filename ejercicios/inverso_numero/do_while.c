#include <stdio.h>

int main() {
    int inverso = 0; // Variable para almacenar el número inverso
    int num; // Variable para almacenar el número ingresado por el usuario
    int digito; // Variable para almacenar cada dígito del número

    printf("Ingrese un numero: ");
    scanf("%d", &num); // Leer el número ingresado por el usuario

    do {
        digito = num % 10; // Obtener el último dígito del número
        inverso = inverso * 10 + digito; // Construir el número inverso
        num /= 10; // Eliminar el último dígito del número original
    } while (num > 0); // Repetir hasta que no queden dígitos en el número original

    printf("El numero inverso es: %d\n", inverso); // Imprimir el número inverso

    return 0; // Indicar que el programa finalizó exitosamente
}

