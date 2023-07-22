/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Un vendedor recibe un sueldo base más un 10% por comision de sus ventas el vendedor desea
saber cuanto dinero obtendra por concepto de comisiones por las 3 ventas que realiza en el mes 
y el total que recibira en el mes tomando en cunta su base y comisiones */

#include <stdio.h>
int main(){
	 float Comision, Sueldo, Precio_Venta, Total;
    int Ventas, Cambio;
	 puts("Sueldo fijo:");
	 scanf("%f",&Sueldo);
	 puts("Ventas Realizadas:");
	 scanf("%d",&Ventas);
	
	 for(int i=0; i < Ventas; i++){
		  printf("Precio de la venta: %d\n",i+1);
		  scanf("%f",&Precio_Venta);
		  Comision = Comision + (Precio_Venta * 0.10);
	 }
	 Total = Comision + Sueldo;
	 printf("Comision: $%.2f\n",Comision);
	 printf("Sueldo: $%.2f\n",Total);
	 return 0;	
}

