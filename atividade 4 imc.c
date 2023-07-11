#include<stdio.h>
void main(){
float peso,altura, imc;

printf("Entre com o seu peso: ");
scanf("%f", &peso);

printf("Entre com a sua altura: ");
scanf("%f", &altura);

imc = peso / (altura * altura);
printf("\nSeu imc e: %f", imc);
if(imc < 20 ){
printf("\nAbaixo do Peso!!!!!!!");
}else if(imc >= 20 && imc < 25 ){
printf("\nPeso Normal!!");
}else if(imc >= 25 && imc < 30 ){
printf("\nObeso!!!!!");
}else{
printf("\nObeso Morbido!!!!!!!");
}

}



