#include<stdio.h>
#include<ctype.h>
char letra;

int main(){
printf("Digite uma letra minuscula\n");
scanf(" %c",&letra);
letra=tolower(letra);

letra=tolower(letra);
if(isalpha(letra)){
	switch(letra){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("A letra %c digitada e uma vogal",letra);
	break;
	default:
	printf("A letra %c e uma consoante",letra);
		
		
		
		
	}
}
else{
	printf("Caractere invalido > nao e letra");
}
return 0;
}
