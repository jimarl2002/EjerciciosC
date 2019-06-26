#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Iteradores - FOR\n\n");
printf("Ingresa el numero de veces que deseas que se imprima el simbolo de #\n\n");

int upperLim, bottomLim;

printf("Imprimir en orden descendiente\n\n");

printf("Ingresar el limite superior\n");
scanf("%i", &upperLim);


printf("Ingresar el limite inferior\n");
scanf("%i", &bottomLim);

for(int i=upperLim; i>= bottomLim; i--){
printf("Numero: %i \n", i);
}


return 0;

}
