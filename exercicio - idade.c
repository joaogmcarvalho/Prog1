#include<stdio.h>

int main()
{
    int n1;
    printf("\nDigite sua idade:");
    scanf("%d", &n1);
    
    if(n1<16)
    printf("\nVoce nao pode votar!\n");
    
    else if((n1<18)||(n1>70))
    printf("\nO voto eh facultativo!\n");
    
    else
    printf("\nVoce deve votar!\n");
    
    system("pause");
    
    return 0;
}
