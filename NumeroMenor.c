#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Validacion de numeros\n\n");

int valA, valB;

printf("Ingresa el numero 1 a comparar.\n");
scanf("%d", &valA);

printf("Ingresa el numero 2 a comparar.\n");
scanf("%d", &valB);

if(valA < valB){
    printf("El numero mayor es el valB numero 2 ingresado valor del numero \"%d\".\n ", valB);
    }
else{
    printf("El numero mayor es el valA numero 1 ingresado valor del numero \"%d\".\n ", valA);
    }

return 0;

}
