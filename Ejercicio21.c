/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Obtener la edad de una persona en meses, si se ingresa su edaden años y meses. 
 * Ejemplo: Ingresado 3 años 4 meses debe mostrar 40 meses*/

#include <stdio.h>
int main(){
	 int Edad, Meses, Resultado = 0;
	 puts("Edad en años:");
	 scanf("%d",&Edad);
	 puts("Cuantos meses:");
	 scanf("%d",&Meses);
	 Resultado = Resultado + (Edad * 12) + Meses;
	 printf("Edad: %d meses\n",Resultado);
	 return 0;
}
