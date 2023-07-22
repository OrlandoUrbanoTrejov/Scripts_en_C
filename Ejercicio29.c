/* Orlando Urbano Trejo (Lando)
 * Fecha: 17-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Solicita al usuario el numero de alumnos en un salon, posteriormente pida la edad de cada uno de ellos y calcula su promedio de edad*/

#include <stdio.h>

int main(){
    int Alumno, Edad;
	 float Suma = 0, Promedio = 0;
	 puts("Cuantos alumnos hay en el salon: ");
	 scanf("%d",&Alumno);
	 for(int i = 0; i < Alumno; i++){
	     printf("Edad del alumno %d: \n",i+1);
		  scanf("%d",&Edad);
		  Suma += Edad;
	 }
	 Promedio = Suma / Alumno;
	 printf("El promedio de las edades de los alumnos es: %.2f\n",Promedio);
	 return 0;
}
