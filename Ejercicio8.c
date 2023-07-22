/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: 
 * La CONAGUA requiere determinar el pago que debe de realizar a una persona por el total de metros
 * cúbicos que consume de agua */

#include <stdio.h>
int main(){
 	 int PrecioMetros,Metros;
	 float Resultado = 0;
	 puts("Ingresa el precio de por metro: ");
	 scanf("%d",&PrecioMetros);
	 puts("Metros trabajados: ");
	 scanf("%d",&Metros);
	 Resultado = PrecioMetros * Metros;
	 printf("Pago:%.2f\n",Resultado);
	 return 0;
}
