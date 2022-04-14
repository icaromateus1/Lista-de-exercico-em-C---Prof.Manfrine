#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {

 int n=0;

 int cont = 0;

 int sq1=0;

 int sq2=0;

 int sq3=0;

 int sq4=0;
 printf("Autor: Icaro Mateus, questao 6\n"); 
 printf("Quantos números serão digitados? ");

 scanf("%d", &cont);

 for(int i=0;i<cont;i++){

   printf("Digite um número: ");

   scanf("%d", &n);

   if(n<0){

     i=cont;

   }

   if((n>=0) && (n<=25)){

     sq1++;

   }else if ((n>=26) && (n<=50)){

     sq2++;

   }else if ((n>=51) && (n<=75)){

     sq3++;

   }else if ((n>=76) && (n<=100)){

     sq4++;

   }

   n=0;

 }

 printf("\nDe 0-25: %d", sq1);

 printf("\nDe 26-50: %d", sq2);

 printf("\nDe 51-75: %d", sq3);

 printf("\nDe 76-100: %d", sq4);

 return 0;

}
