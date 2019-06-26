#include <stdio.h>
#include <stdlib.h>

int main(){
float rSum;
float rRes;
float rDiv;
float rMul;
int rMod;

rSum = 7+3;
rRes = 7.1 - 3.1;
rDiv = 7.0 / 3.0;
rMul = 7*3;
rMod = 7%3;

printf("Resultado de la suma: %i \n", rSum);
printf("Resultado de la resta: %f \n", rRes);
printf("Resultado de la Division: %f \n", rDiv);
printf("Resultado de la Multiplicacion: %f \n", rMul);
printf("Resultado de la Modulo: %i \n", rMod);

return 0;


}
