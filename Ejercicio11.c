/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Multiplicar dos numeros */

#include <stdio.h>
int main(){
	 float Num1, Num2;
	 float Resultado = 0;

	 puts("Numero 1: ");
	 scanf("%f",&Num1);
	 puts("Numero 2: ");
	 scanf("%f",&Num2);
	 Resultado = Num1 * Num2;

	 printf("Resultado: %.2f\n",Resultado);
	 return 0;
}
