/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Realice un algoritmo que, con base en una calificacion proporcionada (0-10), inidique con letra la calificacion que le corresponde:
 * 10 es "A", 9 es "B", 8 es "C", 7 y 6 son "D", y de 5 a 0 son "F".
 * Represente el diagrama de flujo, el pseudocodigo correspondiente */

#include <stdio.h>
int main(){
	int Calificacion;
	puts("Ingresa la calificacion obtenida: (0-10)");
	scanf("%d",&Calificacion);
	switch(Calificacion){
		 case 0:
			  puts("Tu calificacion es: F");
			  break;
		 case 1:
			  puts("Tu calificacion es: F");
		     break;
		 case 2: 
			  puts("Tu calificacion es: F");
			  break;
		 case 3:
			  puts("Tu calificacion es: F");
			  break;
		 case 4: 
			  puts("Tu calificacion es: F");
			  break;
		 case 5:
			  puts("Tu calificacion es: F");
			  break;
		 case 6: 
		     puts("Tu calificacion es: D");
			  break;
		 case 7:
		     puts("Tu calificacion es: D");
			  break;
		 case 8:
			  puts("Tu calificacion es: C");
			  break;
		 case 9: 
		     puts("Tu calificacion es: B");
			  break;
		 case 10:
			  puts("Tu calificacion es: A");
			  break;
	}
   return 0;
}
