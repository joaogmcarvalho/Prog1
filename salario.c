#include <stdio.h>

int main()
{
    float salbrut, desconto, saliqui;
    
    printf("\nInsira o salario bruto: ");
    scanf("%f", &salbrut);
    
    
    if(salbrut<=1500)
       desconto=salbrut*0.05;
    else if(salbrut<=3500)
       desconto=salbrut*0.10;
    else
       desconto=salbrut*0.15;
       
       saliqui=salbrut-desconto;
       
       printf("\nSalario liquido= %.2f\n\n", saliqui);
                          
system("pause");

return 0;
}
