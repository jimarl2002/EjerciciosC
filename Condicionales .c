#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Condicionales if\n");

float valA, valB, valC;

valA = valB = 100;

printf("Primera condicion\n");
    if(valA == valB)
    printf("Ambos son iguales \n");

    printf("Valor de valA %f \n", valA);
    printf("Valor de valB %f \n", valB);

printf("Primera condicion\n");
    if(valA == valB){
    printf("Ambos son iguales \n");

    valC = valA + valB;
    printf("Ademas la suma de ambos numeros es: %f \n", valC);


    printf("Valor de valA %f \n", valA);
    printf("Valor de valB %f \n", valB);
}

return 0;

}
