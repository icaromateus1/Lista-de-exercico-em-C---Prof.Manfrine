#include <stdio.h>
#include <stdlib.h>

int main()

{
  int num, soma;
  printf("Autor: Icaro Mateus, questao 9\n");

  num = soma = 0;
  printf("\nSOMA DOS IMPARES MULTIPLOS DE 3");
  for(num=15; num<=250; num++)
  {
      if(num % 3 == 0)
      soma = soma = num;
  }
  printf("\n\n SOMA: %d\n\n",soma);
  return 0;
}
