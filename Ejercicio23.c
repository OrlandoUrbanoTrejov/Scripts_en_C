/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Genera un programa que determine si eres mayor de edad */

#include <stdio.h>
int main(){
	 int Edad;
	 puts("Edad:");
	 scanf("%d",&Edad);
	 if(Edad >= 18){
		  puts("Eres mayor de edad");
	 }
	 else{
		  puts("Eres menor de edad");
	 }
	 return 0;
}

