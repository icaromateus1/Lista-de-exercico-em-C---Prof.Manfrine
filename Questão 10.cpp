#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void leva_ao_quadrado(int valor){
	printf("Autor: Icaro Mateus, questao 10\n");
    printf("digite um numero: \n");
    scanf("%d",&valor);
    valor=valor*valor;
    printf("Elevado ao quadrado: %d \n",valor);
    	if(valor%2 == 0){
		printf("Multiplo de 2 \n");
	}else{
		printf("Não é multiplo de 2 \n");
	}
}




int main(){
	int valor = 0;
    leva_ao_quadrado( valor);
}

