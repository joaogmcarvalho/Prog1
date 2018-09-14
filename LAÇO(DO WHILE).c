#include<stdio.h>

int main()
{
    int n,soma,i;
    printf("\nEntre com um numero:");
    scanf("%d",&n);
    i=1;
    soma=0;
    do
    {
           soma=soma+i;
           i++;
           }
           while (i<=n);
           
           printf("\nA soma dos %d primeiros=%d\n",n,soma);
           
           system("pause");
           
           return 0;
           }
           
    
