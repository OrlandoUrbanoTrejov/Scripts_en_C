/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Calcular el nuevo salario de un empleado si se le descuenta el 20% de su salario actual */

#include <stdio.h>
int main(){
	 char Nombre[10];
    float Salario, Total = 0;
    puts("Nombre:");
    scanf("%s",&Nombre);
    puts("Salario: ");
    scanf("%f",&Salario);
    Total = Salario - (Salario * 0.20);
    printf("Empleado: %s su salario es: %.2f\n",Nombre,Total);
	 return 0;
}
