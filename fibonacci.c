#include <stdio.h>

int main ()

{
	int a,b, aux, i,n;
	a=0;
	b=1;
	
	printf("Digite um numero:");
	scanf("%d", &n);
	
	printf("Serie de Fibonacci: \n");
	printf("%d\n", &b);
	
	for(i=0; i<n; i++)
	
{
	aux= a+b;
	a=b;
	b=aux;
	
	printf("%d\n", aux);
}
	system ("pause");
	return 0;
	
}

