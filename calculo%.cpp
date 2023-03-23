#include<stdio.h>

int n; 

int main(){
printf("Me fale um numero\n");
scanf("%d",&n);
if(n%2==0){
	printf("O numero %d e par",n);
}
else{
	printf("O numero %d e impar",n);
}



return 0;
}
