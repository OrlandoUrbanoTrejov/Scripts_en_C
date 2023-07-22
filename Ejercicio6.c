/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Se requiere determinar el costo que tendra que realizar una llamada telefonica con base en el tiempo que dura la llamada
 * y el costo por minuto */

#include <stdio.h>
int main(){
	 int Tiempo,Costo;
	 float Total = 0;
	 puts("Tiempo de la llamada en minutos: ");
	 scanf("%d",&Tiempo);
	 puts("Costo por minuto en pesos: ");
	 scanf("%d",&Costo);
	 Total = Tiempo * Costo;
	 printf("Costo de la llamada:$%.2f ",Total);
	 return 0;
}
