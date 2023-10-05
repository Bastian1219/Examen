#include<stdio.h>

int main()
{
	int a = 0;
	printf("Introduzca agno: ");
	scanf("%d", &a);
	while (!((a % 4 == 0)&& (a>0) && (a % 100 != 0) || (a % 400 == 0)))
	{
		printf("No es bisiesto\n");
		printf("\033[5mRepita hasta colocar un agno bisiesto\n\033[0m");
        printf("Vuelva a introducir ano: ");
        scanf("%d", &a);
	}
	
	printf("Es bisiesto\n");

	return 0;
}
