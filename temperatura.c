#include<stdio.h>
#include<stdlib.h>

int main()
{
	float f;
	float c;
	float k;
	
	printf("\n Insira o valor de Fahrenheit: ");
	scanf("%f", &f);
	
	c=(f-32)*(5/(float)9);
	printf("\n O valor de Celsius eh: %.2f", c);
	
	k=c-373.15;
	printf("\n O valor de Kelvin eh: %.2f", k);
	
	system("pause");
	
	return 0;
}
