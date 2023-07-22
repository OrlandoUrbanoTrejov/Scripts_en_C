/* Orlando Urbano Trejo (Lando)
 * Fecha: 17-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Solicita un numero al usuario y calcula su factorial */

#include <stdio.h>

int main(){
	 int Numero, Resultado = 1;
	 puts("Ingresa un numero: ");
	 scanf("%d",&Numero);
	 for(int i = 1; i <= Numero; i++){
		  Resultado *= i;
	 }
	 printf("El factorial de %d es: %d\n",Numero,Resultado);
	 return 0;
}
