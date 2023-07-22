/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Escriba un algoritmo que, dado el número de horas trabajadas por un empleado 
 * y el sueldo por hora, calcule el sueldo total de ese empleado */

#include <stdio.h>
int main(){
	 float Horas, Sueldo_Hora, Sueldo_Final = 0;
    puts("Horas trabajadas:");
	 scanf("%f",&Horas);
	 puts("Sueldo por hora:");
 	 scanf("%f",&Sueldo_Hora);
	 Sueldo_Final = Horas * Sueldo_Hora;
	 printf("Sueldo total: $%.2f\n",Sueldo_Final);
	 return 0;
}
