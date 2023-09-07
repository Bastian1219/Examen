#include <stdio.h>

int main() 
{
    int n;
    printf("Que tabla de multiplicar del 1 al 10 quieres que te imprima?: \n");
    scanf("%d", &n);
    if(n <= 10)
	{
    	printf("Los diez numeros son:\n");
    	int i = 0;
    	while (i <= 10) 
		{
    	printf("%d ", n * i);
    	i++;
    	}
    }
    else {
    	printf("\033[5mNo se puede una tabla arriba del 10\033[0m\n");
    }
   	
	return 0;
}
