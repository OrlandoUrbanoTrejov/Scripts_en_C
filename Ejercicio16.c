/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * En un hospital existen 3 áreas: Urgencias, Pediatría y Traumatología. 
 * El presupuesto anual del hospital se reparte de la siguiente manera: 
 * Pediatría 42% y Traumatología 21% */

#include <stdio.h>
int main(){
	 int Presupuesto;
	 float Urgencias = 0, Pediatria = 0, Traumatologia = 0;
	 puts("Presupuesto anual:");
	 scanf("%d",&Presupuesto);
	 Urgencias = Presupuesto * 0.37;
	 Pediatria = Presupuesto * 0.42;
	 Traumatologia = Presupuesto * 0.21;

	 printf("Presupuesto Urgencias: $%.2f\n",Urgencias);
	 printf("Presupuesto Pediatria: $%.2f\n",Pediatria);
	 printf("Presupuesto Traumatologia: $%.2f\n",Traumatologia);

	 return 0;
}
