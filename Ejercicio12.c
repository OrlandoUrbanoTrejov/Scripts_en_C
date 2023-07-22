/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: 
 * Una persona recibe un prestamo de 10,000 de un banco y desea saber cuanto pagara de interes, si el banco le 
 * cobrara una tasa de 27% anual */

#include <stdio.h>
int main(){
	 int Tiempo, Tiempo_Transcurrido;
	 float Prestamo = 10000, Interes = 0.27;

	 puts("¿Anio en que solicito el prestamo?: ");
	 scanf("%d",&Tiempo);
	 puts("Anio actual: ");
	 scanf("%d",&Tiempo_Transcurrido);

	 for(int i = Tiempo; i <= Tiempo_Transcurrido; i++){
		  Prestamo = Prestamo + (Prestamo * Interes);
		  printf("El interes de %d es de: $%.2f\n",i,Prestamo);
	 }
    return 0;
}
