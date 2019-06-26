#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Adivina el numero \n\n");

int valA = 5, valB;

printf("Primera adivinanza ingresa un numero\n\n");
scanf("%d", &valB);

if(valB == valA){
    printf("Adivinaste el numero es %d \n", valA);
    }
    else{
    printf("No adivinaste comienza de nuevo \n");
    }


return 0;

}
