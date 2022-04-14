#include <stdio.h>
#include <stdlib.h>

int main (){
    int manha = 20, noite = 11, metros,media;
    setlocale(LC_ALL, "Portuguese");
    printf("Autor: Icaro Mateus, questao 5\n");
    
    printf("Queremos saber em quantos dias a aranha sobe uma parede de 18 metros! \n");
    printf("-Dito isto, pela manha ela sobe %d cm, e pela noite desce %d cm.\n", manha,noite );
    
    media= 20 - 11;
    
    printf("-Então em um dia ela some %d cm. \n",media);
    
    metros= 1800/9;

    printf("Com isto a ranha precisaria subir %d dias para chegar ao topo.",metros);
    
    
}

