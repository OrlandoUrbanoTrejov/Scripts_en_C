/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023 
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Un vendedor a realizado N ventas y desea saber cuantas fueron por 10,000 o menos,
 * cuantas fueron por mas de 10,000 pero por menos de 20,000 y cuanto fue el monto de las ventas de cada una,
 * y el monto global, realice el algoritmo para determinar los totales. */

#include <stdio.h>
int main(){
	 int Ventas;
	 int Cantidad[40];
	 float TotalFInal = 0;
	 float Total;
	 // Recabamos la cantidad de ventas que se han hecho
	 puts("Numero de ventas: ");
	 scanf("%d",&Ventas);
	 Cantidad[] = [Ventas];
	 // Ciclo for
	 for(int i=0; i<Ventas; i++){
		  printf("Precio de la venta" + Ventas);
		  TotalFinal = TotalFinal + Ventas[i]; 
	     if(Ventas[i] < 1000){
		      Total = Total + Ventas[i];
	     }
	     else if(Ventas[i] > 1000 && Ventas[i] < 2000){
		      Total = Total + Ventas[i];
	     }
	  }
	  printf("Total final: %.2f\n",TotalFinal);
	  return 0;
}
