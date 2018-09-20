#include <stdio.h>

int main()
{
    float nota, maior, menor, media, soma;
    int i;
    //inicializa a variavel maior com valor baixo, o menor inicializa coom valor alto
    maior=-1;
    menor=9999;
    soma=0;
    
    
    for(i=0;i<5;i++)
    { 
             printf("\nEntre com a nota %d:", i+1);
             scanf("%f", &nota);
             
             if(nota>maior)
             {
                           maior=nota;
                           }
             if(nota<menor)
             {
                           menor=nota;
                           }
             soma=soma+nota; //acumulua todas as notas
             
    }
    
    media=soma/i;
    
  printf("\n\nMaior nota lida=%.2f\n\n", maior);
  
  printf("\n\nMenor nota lida=%.2f\n\n", menor);
  
  printf("\n\nA media das 5 notas eh igual a: %.2f\n\n", media);
  
  system("pause");
  
  return 0;
}
