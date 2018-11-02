#include <stdio.h>

int main()
{
    float notas[4][3],media, av1, av2, av3;
    int i, j;
    int matricula;
    
    
    //ler notas
    for(i=0; i<4; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEntre com a av%d do aluno %d: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
            printf("\n");
    }
    
    //imprimir relatorio de alunos
    
    printf("\n==============================");
    printf("\nMat\tAV1\tAV2\tAV3");
    printf("\n==============================");
    for(i=0; i<4; i++)
    {
        printf("\n%d\t%.2f\t%.2f\t%.2f", i,notas[i][0],notas[i][1],notas[i][2]);
    }
    
        printf("\n\n");
        
    //buscar notas
    
    printf("Entre com a matricula de consulta: ");
    scanf("%d", &matricula);
    
    printf("\n==============================");
    printf("\nMat\tAV1\tAV2\tAV3\tResultado");
    printf("\n==============================");
    //pedir matricula e imprimir as notas
    i=matricula;
    printf("\n%d\t%.2f\t%.2f\t%.2f", i,notas[i][0],notas[i][1],notas[i][2]);
        
    //calcular media
    
    av1=notas[i][0];
    av2=notas[i][1];
    av3=notas[i][2];
    
    if( (av1<av2)  && (av1<av3) )
    {
        media= ( av2+av3 )/2;
        printf("\nMedia = %.2f", media);
    }       
    
    else if( av2<av3)
    {
         media = ( av1+av3 )/2;
         printf("\n\nMedia = %.2f\n", media);
    }
    else
    {
        media= ( av1+av2 )/2;
    }
    
        if(media>=6)
           printf("\tPASSOU!!");
        else
           printf("\tNÃO PASSOU!!");
        
        printf("\n\nMedia = %.2f\n", media);
        printf("\n\n");
                   
                   
                   
    system("pause");
    return 0;
    
}
