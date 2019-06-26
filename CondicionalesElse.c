#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Condicionales if, else, else if \n\n");

float valA, valB, valC;

valA = 50;
valB = 100;
valC = 150;

printf("Primera condicion\n\n");
    if(valA == valB)
    printf("No se va a cumplir esta condicion \n");
    else if(valB == valC)
    printf("Tampoco se va a cumplir esta condicion \n");
    else {
        printf("Ninguna condicion se cumplio \n");
        printf("Despues de esta linea el programa va a terminar \n");
    }



return 0;

}
