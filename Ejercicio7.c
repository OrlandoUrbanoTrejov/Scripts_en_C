/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Realice un algoritmo para leer calificaciones de N alumnos y determine el numero de alumnos 
 * aprobados y reprobados */

#include <stdio.h>
int main(){
	 int Alumnos;
	 float Calificacion;
	 puts("Cantidad de alumnos: ");
	 scanf("%d",&Alumnos);
	 for(int i = 0; i<Alumnos; i++){
		  printf("Calificacion del alumno %d (1-100):\n",1+i);
		  scanf("%f",&Calificacion);
		  if(Calificacion > 70){
			   puts("APROBADO");
		  }
		  else{
			   puts("REPROBADO");
		  }
	 }
	 return 0;
}
