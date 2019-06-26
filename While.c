#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Iterador bucle loop while\n\n");

int limit;

scanf("%i", &limit);

int i = 1;


while(i <= limit)
{
    printf("Elegiste el numero %i y es menor que: %i  en el iterador del ciclo\n", limit, i);
    i++;
}

return 0;

}

