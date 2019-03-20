#include<stdio.h>
#include<stdlib.h>

int main()
{
  int idade;
  char nome;
  float peso;
  
  printf("Ola Mundo 2 !! \n");

  printf("Meu nome eh Joao Gabriel ! \n");

  printf("\n Qual a sua idade?");
  scanf("%d", &idade);
  
  printf("\n A sua idade eh %d anos.", idade);
  
  printf("\n E qual o seu peso?");

  scanf("%f", &peso);
   
  printf("Voce tem %.2f kg", peso);
  
  system("pause");

  return 0;

}
