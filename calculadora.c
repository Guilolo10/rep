#include <stdlib.h>
#include <stdio.h>
#include "funcao.h"

void main(){
	
	float num1,num2,resultado;
	char escolha;
	char operaçao;


do{ 
	printf("Digite o numero 1");
	scanf("%f", &num1);
	printf("digite numero 2");
	scanf("%f", &num2);
	printf("escolha a operacao (+,-,*,/):");

	if (operaçao =='+'){
		resultado = somar (num1, num2);
		printf("resultado:%.2f\n", resultado);
	}

	else if (operaçao == '-'){
		resultado = subtrair(num1,num2);
		printf("resultado:%.2f\n", resultado);

	}

	else if (operaçao == '*') {
	     resultado = multipicar(num1,num2);
	     printf(re


	

	

}


