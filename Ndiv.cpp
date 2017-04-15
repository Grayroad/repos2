#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	printf("Numeros divisiveis, entre com um numero para comecar.\n");
	scanf("%d", &i);
	system("cls");
	printf("Numeros divisiveis de %d...\n\n", i);
	for(int j = 1;j <= i;j++)
	{
		if((i % j == 0) && (i != j))
		{
			printf("%d, ", j);
		}
		else if ((i == j))
		{
			printf("%d.\n", j);
		}
	}
	printf("\nFim de calculos.\n\n");
	system("pause");
}
