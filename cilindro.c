#include <stdio.h>
#include <stdlib.h>

int main(){

float radio;
float altura;
float area;
float volumen;
float total;

printf("Ingresa los datos solicitados para realizar el calculo \npara hallar el area del cilindro: ");

printf("Ingresa el valor del radio:");
scanf("%f", &radio);
printf("Ingresa el valor del altura:");
scanf("%f", &altura);
printf("Ingresa el valor del area:");
scanf("%f", &area);
printf("Ingresa el valor del volumen:");
scanf("%f", &volumen);

total = radio * altura * area * volumen;

printf("Resultado de los calculos realizados es: %f", total);

return 0;


}
