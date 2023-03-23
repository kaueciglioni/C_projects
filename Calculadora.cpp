#include<stdio.h>

float a,b;
char op;

int main(){
printf("*********Calculadora*********\n\n");
printf("Me fale o numero A\n");
scanf("%f",&a);
printf("Digite o operador: + - * /\n");
scanf(" %c",&op);
printf("Qual e o o numero B?\n");
scanf("%f",&b);

switch(op){
	case'+':
		printf("\nO valor da soma e: %.2f\n",a+b);
	break;
	case'-':
		printf("\nO valor da subtracao e %.2f\n",a-b);
	break;
	case'*':
		printf("\nO valor da multiplicacao e %.2f\n",a*b);
	break;
	case'/':
		if(b!=0){
			printf("\nO valor da divisao e %.2f\n",a/b);	
		}
		else{
			printf("Nao existe divisao por 0");			
		}

	break;
	default:
		printf("OPERADOR INVALIDO");
}
return 0;	
}



