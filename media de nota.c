#include <stdio.h>

int main()
{
    float nota, maior, menor, media, soma;
    int i;
    //inicializa a variavel maior com valor baixo, o menor inicializa coom valor alto
    maior=-1;
    menor=9999;
    soma=0;
    
    
    for(i=0;i<3;i++)
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
  
  printf("\n\nA media das 3 notas eh igual a: %.2f\n\n", media);
  
   if(media>=6)
             {
             	media>=6;
             	printf("\nVoce esta aprovado!!!\n");
			 }
   if(media<6)
   {
   	media<6;
   	printf("\nVoce esta reprovado!!!\n");
   }
  
  system("pause");
  
  return 0;
}
