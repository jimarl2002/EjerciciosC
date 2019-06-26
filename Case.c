#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Condicional switch\n\n");

printf("Elige una de las opciones 1, 2, 3 o 0 para salir     \n\n");

int option;

scanf("%d", &option);

switch(option){
case 1:
printf("Elegiste el numero 1 \n");
break;

case 2:
printf("Elegiste el numero 2 \n");
break;

case 3:
printf("Elegiste el numero 3 \n");
break;

default:
printf("Elegiste una opcion invalida \n");
break;

case 0:
exit(1);
break;

}

return main();

}
