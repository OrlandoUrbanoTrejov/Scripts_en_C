/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Escriba un algoritmo que dada la cantidad de monedas de 5-10-20 pesos, 
 * diga la cantidad de dinero que se tiene en total */

#include <stdio.h>
int main(){
	 float Cajero[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50};
    float Cantidad = 0;
    int C;	
	 for(int i = 0; i < 11; i++){
		  printf("Cantidad de %.2f que tiene\n",Cajero[i]);
		  scanf("%f",&C);
		  Cantidad = Cantidad  + (C * Cajero[i]);
	 	  printf("Total: $%.2f\n",Cantidad);
	 }
	 return 0;
}

