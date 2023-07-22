/* Orlando Urbano Trejo (Lando)
 * Fecha: 12-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Calcula la cantidad de euros a monedas */

#include <stdio.h>
int main(){
	 puts("-------- MENU DE CONVERSIONES --------");
	 puts("1) Euros");
	 puts("2) Dolares");
	
	 int Opcion, Dinero, Pesos;
	 float Dolar = 16.89;
	 float Euro = 0.053;
	 float Resultado = 0;
	 puts("");
	 puts("Elege una opcion: ");
	 scanf("%d",&Opcion);

	 if(Opcion == 1){
		  puts("Dinero:");
		  scanf("%d",&Dinero);
		  Resultado = Dinero/Dolar;
		  printf("Dinero: %.2f dolares\n",Resultado);
	 }
	 else if(Opcion == 2){
		  puts("Dinero:");
		  scanf("%d",&Dinero);
		  Resultado = Dinero / Euro;
		  printf("Dinero: %.2f euros\n",Resultado);
	 }
	 else{
		  Puts("Opcion no valida");
    }
	 return 0;
}

