#include<stdio.h>

float a,b,c;

int main(){
printf("Qual e o triangulo\n");
printf("Temos o EQUILATERO (3LADOS IGUAIS), ISOCELES (DOIS LADOS IGUAIS) E O ESCALENO (NENHUM LADO IGUAL)\n\n");
printf("Me fale o valor do lado A\n");
scanf("%f",&a);
printf("Me fale o valor do lado B\n");
scanf("%f",&b);
printf("Me fale o valor do lado C\n");
scanf("%f",&c);

if(a+b>c && b+c>a && a+c>b){ //para saber se é um triangulo
 if(a==b && b==c){
 	printf("Seu triangulo de lado a> %.2f b> %.2f c> %.2f e o EQUILATERO",a,b,c);	
	 }
	else if(a==b || b==c || c==a){
   	 	printf("Seu triangulo de lado a> %.2f b> %.2f c> %.2f e o ISOCELES",a,b,c);	
 	 }
	 else{
		printf("Seu triangulo de lado a> %.2f b> %.2f c> %.2f e o ESCALENO",a,b,c);
	 }
 
}
else{
	printf("Nao e um triangulo");
}
return 0;
}
		
