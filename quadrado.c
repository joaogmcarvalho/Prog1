#include<stdio.h>

int main()
{
      int i, j, tam;
      
      printf("\nEntre com tamanho do quadrado: ");
      scanf("%d", &tam);
      

      for(i=1;i<=tam;i++){
          for(j=1;j<=tam;j++)
      {
                         if(i==1 || i==tam)
                         printf("#");
                         else if(j==1 || j==tam)
                         printf("#");
                         else
                         printf(" ");
                         
      }
      printf("\n");
}
      
      

system("pause");

return 0;

}
