#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Iterador bucle loop while imprimir simbolo n cantidad de veces\n\n");
printf("Ingresa el numero de veces que deseas que se imprima el simbolo de #\n\n");

int limit;
scanf("%i", &limit);

int i = 1;

while(i <= limit)
{
    printf("#\n");
    i++;
}

return 0;

}
