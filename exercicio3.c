#include <stdio.h>

int main()
{
    int n1, n2;
    int resto;
    
    printf("\nEntre com n1:");
    scanf("%d", &n1);
    
    printf("Entre com n2:");
    scanf("%d", &n2);
    
    resto=n1%n2;
    
    printf("Resto da divisao de %d por %d = %d\n", n1,n2,resto);
    
    if(resto%2==0)
    {
        printf("Este numero eh par!\n");
    }
    
    else
    printf("Este numero eh impar!\n");

    system ("pause");

    return 0;
}
