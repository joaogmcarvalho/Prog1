#include <stdio.h>

int main()
{

	int n1,n2; /*isto eh a variavel*/
    float resultado;

	printf("\nEntre com um numero:"); /*imprimir na tela, isso eh o que aparece pro usuario*/
	scanf("%d", &n1); /*le o codigo, isso nao aparece pro usuario*/

	printf("\nEntre com outro numero:");
	scanf("%d", &n2);

	resultado=n1+n2;
	printf("\nA soma de %d e %d eh igual a:%.0f\n",n1,n2,resultado);

	resultado=n1-n2;
	printf("\nA subtracao de %d e %d eh igual a:%.0f\n",n1,n2,resultado);

	resultado=n1*n2;
	printf("\nA multiplicacao de %d e %d eh igual a:%.0f\n",n1,n2,resultado);

	resultado=(float)n1/n2;
	printf("\nA divisao de %d e %d eh igual a:%.2f\n\n",n1,n2,resultado);

    /*O %d acima esta indicando n1 e n2, mas para isso os mesmos precisam estar dentro do () igual o resultado*/






	system ("pause");

	return 0;
	}
