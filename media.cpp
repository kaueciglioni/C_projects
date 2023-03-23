#include<stdio.h>

float n1,n2,m; 

int main(){
printf("Qual foi sua nota na primeira prova\n");
scanf("%f",&n1);
printf("Qual foi sua nota na segunda prova\n");
scanf("%f",&n2);

m=(n1+n2)/2;

if(m>=6){
printf("Sua media foi %.2f e voce foi aprovado",m);
}
else{
printf("Sua media foi %.2f e voce foi reprovado",m);
}
return 0;
}
