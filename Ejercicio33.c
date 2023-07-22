/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: Haciendo uso de 2 arreglos, almacena 5 números en cada arreglo, posteriormente vas a multiplicar los arreglos */

#include <stdio.h>

int main() {
    int Primero[5], Segundo[5], Multiplicacion[5], Suma;
 
    for (int i = 0; i < 5; i++) {
		  printf("Valor %d: \n",i+1);
 		  scanf("%d", &Primero[i]);
    }
    puts("");
  	 for (int i = 4; i >= 0; i--) {
		  Suma = i + 2;
		  printf("Valor %d: \n",Suma-1);
        scanf("%d", &Segundo[i]);
    }

    for (int i = 0; i < 5; i++) {
        Multiplicacion[i] = Primero[i] * Segundo[i];
    }

    puts("Resultado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", Multiplicacion[i]);
    }

    return 0;
}

