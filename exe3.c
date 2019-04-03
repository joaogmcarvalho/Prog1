#include<stdio.h>

int main(){
	int senha;
	
	printf("\nInsira a sua senha:");
	scanf("%d", &senha);
	
	if(senha==1234){
		printf("\nAcesso Permitido\n");
	}
	else{
		printf("\nAcesso Negado\n");
	}
	
	system("pause");
	return 0;
}

