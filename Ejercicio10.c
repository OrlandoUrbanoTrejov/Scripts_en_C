/* Orlando Urbano Trejo (Lando)
 * Fecha: 11-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * El banco bandido de peluche desea calcular para cada uno de sus N clientes su saldo actual, su pago minimo y su pago para no generar intereses
 * Ademas quiere calcular el monto de lo que gano por concepto intereses con los clientes morosos. los datos que se conocen de cada clientes son:
 * Saldo anterior, monto de las compras que realizo y pago que deposito en el corte anterior. Para calcular el pago minimo se considera 15% del
 * saldo actual, y el pago para no generar intereses corresponde al 85% del pago actual, considerando que el saldo actual debe incluir 12% de los
 * intereses causados por no realizar el pago minimo y $200 de multa por el mismo motivo. Realice el algoritmo correspondiente. */

#include <stdio.h>
int main(){
	 float Saldo_Actual = 0, Pago_Actual = 0, Saldo_Anterior = 0, Saldo_Minimo = 0, Pago_Interes = 0, Monto_Compras = 0, Deposito = 0;
	 int Clientes;
	 char Nombre[50];
    puts("Numero de clientes: ");
	 scanf("%d",&Clientes);
    for(int i = 0; i < Clientes; i++){
		  puts("Nombre cliente: ");
		  scanf("%s",&Nombre);
		  puts("Saldo anterior: ");
		  scanf("%f",&Saldo_Anterior);
		  puts("Ultimo deposito: ");
		  scanf("%f",&Deposito);
		  puts("Monto por ventas: ");
		  scanf("%f",&Monto_Compras);
		  puts("Saldo Actual: ");
		  scanf("%f",&Saldo_Actual);

		  Pago_Actual = (Saldo_Actual * 0.12) + 200;
		  Saldo_Minimo = Saldo_Actual * 0.15;
		  Pago_Interes = Saldo_Actual * 0.85;
		
	     printf("Tu saldo actual %s es de %.2f pesos\n",Nombre,Pago_Actual);
		  printf("Tu pago minimo %s es de %.2f pesos\n",Nombre,Saldo_Minimo);
		  printf("El pago pago para no generar intereses %s es de %.2f pesos\n",Nombre,Pago_Interes);
    }
	 return 0;
}
