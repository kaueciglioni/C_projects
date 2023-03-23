#include <stdio.h>

float k, v, r;

int main (){

printf("\n* Corrida 5 reais fixo, 6 reais variaveis por km*\n");
printf("Quantos km voce vai rodar: ");
scanf("%f", &k);
v=(k*6)+5;
printf("O valor da corrida e: %.2f",v);

return 0;
}
