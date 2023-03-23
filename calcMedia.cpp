#include<stdio.h>

float n1,n2,m;

int main(){
printf("Qual e a primeira nota\n");
scanf("%f",&n1);
printf("Qual e a segunda nota\n");
scanf("%f",&n2);

m=(n1+n2)/2;

if(m>=7 && m<=10){
	printf("APROVADO COM MEDIA %.2f",m);
	}
	else if(m>=3 && m<7){
		printf("RECUPERACAO COM MEDIA %.2f",m);
		}
			else if(m<=0 && m<3){
			printf("REPROVADO COM MEDIA %.2f",m);
			}
				else{
					printf("Notas invalidas");
				}
return 0;
}
		
