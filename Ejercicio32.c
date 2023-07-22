/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio:
 * Haciendo uso de arreglos, almacena la calificación de una materia (Recuerda que son 5 unidades). Posteriormente, calcula el promedio final e imprime los resultados.*/

#include <stdio.h>

int main(){
	 int Calificacion[5];
	 char Materia[20];
	 float Suma = 0, Promedio = 0;
	 puts("Materia: ");
	 scanf("%s",&Materia);

	 for(int i = 1; i <=5; i++){
		  printf("Calificacion en la Unidad %d:\n",i);
		  scanf("%d",&Calificacion[i]);
		  Suma += Calificacion[i];
	 }
	 printf("Asignatura: %s\n",&Materia);
    printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\t Promedio\n");
    for(int i = 1; i <=5; i++){
	     printf("%8d\t",Calificacion[i]);
	 }
	 Promedio = Suma / 5;
	 printf("%.2f\n",Promedio);
	 return 0;
}
