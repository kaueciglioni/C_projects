#include<stdio.h>

float n1,s,r,v;

int main(){
printf("Qual e o valor da suas vendas\n");
scanf("%f",&n1);

if(n1<=600){
	v=n1*0.04;
	printf("Seu salario e %.2f",v);
}
	else if(n1>=5001){
		s=n1*0.10;
		printf("Seu salario e %.2f",s);
		}
return 0;
}
		
