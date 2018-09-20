#include <stdio.h>

main()
{
	int i, n;
	
	printf("\nEntre com um numero:");
	scanf("%d", &n);
	
	long fat=1;
	
	for(i=1;i<=n;i++)
	{
		fat=fat*i;
		
	}
	
	printf("\nO fatorial de %d eh igual a %i\n", n, fat);
	
	system("pause");
	
	return 0;
}
