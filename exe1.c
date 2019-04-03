#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("\nInsira o valor de A:");
	scanf("%d", &a);
	
	printf("\nInsira o valor de B:");
	scanf("%d", &b);
	
	if(a>b){
		printf("\n %d eh o menor numero\n", b);
	}
	else if(b>a){
		printf("\n %d eh o menor numero\n", a);
	}
	else{
		printf("\nOs valores sao iguais\n!!");
	}

	system("pause");
	return 0;
}
