8-
#include <stdio.h>
#include <stdlib.h>
int main(){
int n1=0,cont=0,quant=0;
printf("Autor: Icaro Mateus, questao 8\n");
do{	printf("Digite um n�mero: ");	 
scanf("%d", &n1);	
cont++;	
if(n1>5)	
quant++;	}
while(cont<10);	
printf("\nN�mero maiores que 5: %d", quant);	

}
