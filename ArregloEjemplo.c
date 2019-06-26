#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Arreglos unidimensionales -Ejemplo\n");

int integerList[5];
integerList[0] = 4;
integerList[1] = 5;
integerList[2] = 6;
integerList[3] = 6;
integerList[4] = 6;

printf("\n Primer Entero: \t\t %i \n", integerList[0]);
printf("\n Segundo Entero: \t\t %i \n", integerList[1]);
printf("\n Tercero Entero: \t\t %i \n", integerList[2]);
printf("\n Cuarto Entero: \t\t %i \n", integerList[3]);
printf("\n Quinto Entero: \t\t %i \n\n", integerList[4]);

int total;

total = integerList[0] * integerList[1]* integerList[2] * integerList[3] * integerList[4];

printf("\n La multiplicacion es : \t\t %i \n", total);

return 0;
}
