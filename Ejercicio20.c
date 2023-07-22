/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Concatenar 3 numeros o letras y mostrar el resultado */

#include <stdio.h>
int main(){
	 int N1, N2, N3, Resultado = 0;
    puts("Numero 1:");
	 scanf("%d",&N1);
	 puts("Numero 2:");
    scanf("%d",&N2);
	 puts("Numero 3:");
    scanf("%d",&N3);
	 Resultado = N1 + N2 + N3;
    printf("Concatenacion: %d\n",Resultado);	
    return 0;
}
