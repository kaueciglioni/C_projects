#include<stdio.h>

int cod;
float valor,total;

int main(){
printf("\nQual o valor da compra?\n");
scanf("%f",&valor);
if(valor>0){
 printf("\n*****************************\n");
 printf("\nInforme como sera o pagamento\n");
 printf("\n1 - a vista\n");
 printf("\n2 - a prazo\n");	
 printf("\n*****************************\n");
 scanf("%d",&cod);

 switch(cod){
	case 1:
		total=valor*0.90;   //total=valor-(valor*0.10);
		printf("\nO total a pagar a vista e R$ %.2f\n",total);
	break;
	case 2:
		printf("\nO total a pagar a prazo e R$ %.2f\n",valor);
	break;
	default:
		printf("\nForma de pagamento invalida\n");
 }//switch
}//if
else
  printf("\nValor invalido\n");
return 0;
}

