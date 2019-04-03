#include<stdio.h>

int main(){
	int idade;
	
	printf("\nQual a sua idade?");
	scanf("%d", &idade);
	
	if((idade>=18)&&(idade<70)){
		printf("\nVOCE PODE VOTAR\n");
	}
	else if((idade>=16)||(idade>=70)){
		printf("\nO SEU VOTO E FACULTATIVO\n");
	}
	else{
		printf("\nVOCE NAO PODE VOTAR\n");
	}
	
	system("pause");
	return 0;
}
