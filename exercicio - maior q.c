#include<stdio.h>

int main()
{
    int n1,n2;
    printf("\nDigite n1:");
    scanf("%d", &n1);
    
    printf("\nDigite n2:");
    scanf("%d", &n2);
    
    if (n1>n2)
    printf("\n%d eh maior que %d\n",n1,n2);
    
    else
    printf("\n%d eh maior que %d\n",n2,n1);
    
    system("pause");
    return 0;
}
    
