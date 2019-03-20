#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	int resp1, resp2, resp3, resp4;
	
	printf("\nInsira o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &n2);
	
	resp1=n1+n2;
	printf("\n O produto da soma eh: %d", resp1);
	
	resp2=n1*(n2*n2);
	printf("\n A soma do produto pelo quadrado do segundo eh: %d", resp2);
	
	resp3=n1*n1;
	printf("\n O quadrado do primeiro numero eh: %d", resp3);
	
	resp4=n1%n2;
	printf("\n O modulo do primeiro numero eh: %d \n", resp4);
	
	system("pause");
	
	return 0;
}
