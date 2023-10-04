#include<stdio.h>

int main()
{
    int i, j, x;

    printf("Hasta que numero quieres la mitad de la piramide: ");
    scanf("%d", &x);
	while (x>50)
	{
		printf("\033[1mEl numero maximo de la mitad de piramide no puede ser mayor que 50\n\033[0m" );
		printf("Repita por favor: \n" );
		scanf("%d", &x);
	}
		
	for (i = 1; i <= x; i++)
		{
    	   for (j = 1; j <= i; j++) 
			{
    	        printf("%d ", j);
     	  	}
     	   printf("\n");
   		}
    return 0;
}

