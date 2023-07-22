/* Orlando Urbano Trejo (Lando)
 * Fecha: 11:07:2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: 
 * Realice un algoritmo que determine el sueldo semanal de N trabajadores considerando que se les descuenta
 * 5% de su sueldo si ganan entre 0 y 150 pesos. Se les descuenta 7% si ganan mas de 150 pero menos de 300, y 
 * 9% si ganan mas de 300 pero menos de 450. Los datos son horas trabajadas, sueldo por hora, y nombre de cada trabajador */

#include <stdio.h>
int main(){
	 int Trabajadores;
	 float Horas_Trabajadas, Sueldo_Hora, Salario = 0, Nuevo_Salario = 0, Total = 0;
	 char Nombres[50];
	 puts("Numero de trabajadores: ");
	 scanf("%d",&Trabajadores);
	 for(int i = 0; i < Trabajadores; i++){
		  printf("Nombre del trabajador %d:\n",i+1);
		  scanf("%s",&Nombres);
		  puts("Horas Trabajadas: ");
		  scanf("%f",&Horas_Trabajadas);
		  puts("Sueldo por hora: ");
		  scanf("%f",&Sueldo_Hora);
		  Salario = Horas_Trabajadas * Sueldo_Hora;

	     if(Salario >= 0 && Salario <= 150){
		        Nuevo_Salario = Salario * 0.5;
	     }
	     else if(Salario > 150 && Salario <= 300){
	 	      Nuevo_Salario = Salario * 0.7;
		  }
	     else if(Salario > 300 && Salario <= 450){
		      Nuevo_Salario = Salario * 0.9;
		  }
	     else{
	 	      Nuevo_Salario = 0;
	     }
	 Total = Salario - Nuevo_Salario;
	 printf("Trabajador: %s\n",Nombres);
	 printf("Salario final: %.2f\n",Total);
	 }
	 return 0;
}
