#include<stdio.h>

float c,vc;

int main(){
printf("Gastos de ate R$100 ganha 5por cento de desconto\n");
printf("Gastos acima de R$101 ganha 10 por cento de desconto\n");
printf("Quanto deu o valor da compra?");
scanf("%f",&c);

if(c>=101){	
vc=(c*0.90);
printf("Voce ganhou desconto de 10por cento e o valor da compra e> %.2f\n",vc);
}
else{
vc=(c*0.95);
printf("Voce ganhou desconto de 5por cento e o valor da compra e %.2f>\n",vc);
}
}
