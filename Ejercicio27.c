/* Orlando Urbano Trejo (Lando)
 * Fecha: 17-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Realiza un codigo que calcule la mitad de la tercera parte del doble de un numero */

#include <stdio.h>
//#include <math.h>

int main(){
	 float Resul1 = 0, Resul2 = 0, Numero, Final = 0;
	 puts("Ingresa un numero: ");
	 scanf("%f",&Numero);
	 Resul1 = (Numero * 2);
    Resul2 = (Resul1 / 3);
	 Final = Resul2 / 2;	
	 printf("La mitad de la tercera parte del doble de %.2f es: %.2f\n",Numero,Final);
	 return 0;
}
