#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Arreglos unidimensionales\n");

int integerList[3];
integerList[0] = 4;
integerList[1] = 5;
integerList[2] = 6;

float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};

char charList[4];
charList[0] = 'D';
charList[1] = 'A';
charList[2] = 'N';
charList[3] = 'I';

printf("\n Primer Entero: \t\t %i", integerList[0]);
printf("\n ultimo Flotante: \t\t %f", floatList[4]);
printf("\n tercer Caracter: \t\t %c", charList[2]);
return 0;
}
