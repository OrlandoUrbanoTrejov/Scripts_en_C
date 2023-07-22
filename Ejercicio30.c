/* Orlando Urbano Trejo (Lando)
 * Fecha: 17-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Un vendedor de vestidos ofrece 3 diferentes tallas, con diferentes precios, la grande con un precio
de $500 por vestido, la mediana con un costo de $400 y la chica de $300. Selecciona la talla a comprar
y solicita el número de vestidos que desee, Posteriormente, calculo el monto final.*/

#include <stdio.h>
int main(){
    puts("----VESTIDOS----");
	 puts("1) Grande $500");
	 puts("2) Mediana $400");
	 puts("3) Chica $300");
	 int Vestido, Cantidad;
	 float Total;
	 puts("Elige la marca que deseas comprar (1-3): ");
	 scanf("%d",&Vestido);
	 if(Vestido == 1){
	     puts("Numero de vestidos que deseas comprar: ");
		  scanf("%d",&Cantidad);
		  Total = Cantidad * 500;
	 }
	 else if(Vestido == 2){
	     puts("Numero de vestidos que deseas comprar: ");
        scanf("%d",&Cantidad);
        Total = Cantidad * 400;
	 }
	 else if(Vestido == 3){
        puts("Numero de vestidos que deseas comprar: ");
        scanf("%d",&Cantidad);
        Total = Cantidad * 300;
    }
	 printf("Monto total de la venta: $%.2f\n",Total);
	 return 0;
}
