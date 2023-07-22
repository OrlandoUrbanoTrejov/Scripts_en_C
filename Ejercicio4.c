/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Se requiere determinar el tiempo en que tarda una persona en llegar de una ciudad a otra en bicicleta, 
 * Considerando que lleva una velocidad constante */

// Bibliotecas
#include <stdio.h>
int main(){
	 float KH, Distancia;
	 puts("Velocidad en (km/h):");
	 scanf("%f",&KH);
    puts("Distancia recorrida:");
	 scanf("%f",&Distancia);
	 printf("Tiempo: %.2f horas\n",(KH*Distancia) / 60);
	 return 0;
}
