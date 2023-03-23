#include<stdio.h>

int idade;
float altura;
char genero,nome[40],apelido[20];

int main(){
printf("Digite sua idade\n");
scanf("%d",&idade);

printf("Qual e a sua altura\n");
scanf("%f",&altura);

printf("Qual e o seu genero\n");
scanf(" %c",&genero); //armazena uma letra

printf("Qual e o seu nome\n");
scanf(" %[^\n]",&nome); //armazena frase

printf("Como voce deseja ser chamado\n");
scanf("%s",&apelido);
//comando de saida
printf("****************cadastro*******************");
printf("\nNome %s, apelido %s, genero %c. altura %.2f, idade %d\n",nome,apelido,genero,altura,idade);



return 0;
}
