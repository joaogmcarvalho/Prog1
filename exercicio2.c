#include <stdio.h>

int main()
{
    int n1;
    
    printf("\nEntre com um numero: ");
    scanf("%d", &n1);
    if(n1%2==0)/*operador % */
    {
        printf("Este numero eh par!\n");
    }
    else
    printf("Este numero eh impar!\n");

    system("pause");

    return 0;
}
