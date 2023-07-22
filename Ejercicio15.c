/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Calcular el descuento de un medicamento */

#include <stdio.h>
int main(){
	 char Nombre[10];
	 float Precio, Total = 0;
	 puts("Nombre:");
	 scanf("%s",&Nombre);
	 puts("Precio del Medicamento: ");
	 scanf("%f",&Precio);
	 Total = Precio - (Precio * 0.35);
    printf("Cliente: %s el total a pagar: %.2f\n",Nombre,Total);
	 return 0;
}
