/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Calcula el precio de un boleto de viaje, tomando en cuenta el numero de kilometros que se van a recorrer.
 * El precio por kilometro es de $20.50 */

#include <stdio.h>
int main(){
	 float Precio_Boleto = 20.50;
	 float Num_Kilometros, Precio = 0;
	
	 puts("Numero de kilometros a recorre: ");
	 scanf("%f",&Num_Kilometros);
	 Precio = Precio_Boleto * Num_Kilometros;
	 printf("El precio de tu boleto es de: $%.2f\n",Precio);
	 return 0;
}
