#include<stdio.h>

int idade,tempo;

int main(){
printf("*******Verificacao de aposentadoria*********\n");
printf("Me fale sua idade\n");
scanf("%d",&idade);
printf("Quanto tempo voce trabalha?\n");
scanf("%d",&tempo);

if(idade>=65 || tempo>=30 ||(idade>=60 && tempo>=25)){
printf("Idade %d e Tempo trabalhado %d - Requer aposentadoria",idade,tempo);
}

else{
printf("Idade %d e Tempo trabalhado %d - Nao requer aposentadoria",idade,tempo);
}
return 0;
}
		
