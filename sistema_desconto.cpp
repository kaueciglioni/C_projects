#include<stdio.h>

int mc;
float va; 

int main(){
printf("Quantas macas voce vai comprar\n");
scanf("%d",&mc);

//Quantidade maior ou igual a uma duzia = 1,00
//Quantidade menor a uma duzia =1,30

if(mc>=12){
va=(mc*1.00);
printf("O valor a ser pago e R$%.2f \n",va);
}
else{
va=(mc*1.30);
printf("O valor a ser pago e R$%.2f \n",va);
}
return 0;
}
