/* Orlando Urbano Trejo (Lando)
 * Fecha: 17-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Realiza un codigo que imprima un arbol de navidad, de la siguiente manera. Recuerda hacer uso de ciclos*/
#include <stdio.h>

int main() {
    int Altura, Espacios, Tronco;
    puts("Altura del arbol: ");
    scanf("%d", &Altura);

    for (int i = 1; i <= Altura; i++) {
        Espacios = Altura - i;

        // Imprimir espacios en blanco
        for (int j = 1; j <= Espacios; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    
    Tronco = Altura - 1;
    // Imprimir el tronco del árbol
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= Tronco; j++) {
            printf(" ");
        }
        printf("**\n");
    }

    return 0;
}

