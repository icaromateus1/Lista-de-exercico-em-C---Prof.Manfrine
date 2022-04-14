#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<string.h> 
int main(){
    char name[15], sex[2];
    int id;
	setlocale(LC_ALL, "Portuguese");
     printf("Autor: Icaro Mateus, questao 3\n");
     gets(name);
    printf("\nDigite seu sexo: (F ou M) \n");
     gets(sex);
    printf("\nDigite sua idade: \n");
     scanf("%d", &id); 

    if (! stricmp(sex,"f") && id<25)
    	printf("\nStatus: ACEITA!");
    else
    	printf("\nStatus: Não aceita.");
    

	return 0;

}

