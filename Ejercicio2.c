/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Realice un algoritmo que calcule el precio total del boleto de una persona, ingresando el precio por kilometro y 
 * la cantidad de kilometros a recorrer. Represente el diagrama de flujo, el pseudocodigo correspondiente
 */

#include <stdio.h>
int main(){
	 float Precio_Kilometro, Distancia;
	 float Precio_Boleto = 0;

	 puts("Precio por kilometro:");
	 scanf("%f",&Precio_Kilometro);
	 puts("Canitdad de kilometros a recorrer:");
	 scanf("%f",&Distancia);
    printf("Precio del boleto: $%.2f\n",Precio_Kilometro * Distancia);
    return 0;
}
