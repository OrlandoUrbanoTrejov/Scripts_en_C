/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando7@gmail.com
 */
/* Ejercicio:
 * Se desea saber el total de una caja registradora de un almacén, se conoce el numero de billetes y 
 * monedas asi como su valor
 */

#include <stdio.h> //Bibliotecas

int main(){
	 int Convertidor = 0;
	 int Resultado;
	 int Dinero;
	 float dinero[] = {1000, 500, 200, 100, 50, 20, 5, 2, 1, .50, .20, .10};
	 for(int i =0; i < 12; i++){
		  printf("Cantidad de dinero que tiene:%.2f pesos\n",dinero[i]);
		  scanf("%d",&Convertidor);
		  Resultado = Resultado + (Convertidor * dinero[i]);
		  printf("Total almacenado: $%d pesos\n",Resultado);
	 }
    return 0;
} // Fin del metodo
