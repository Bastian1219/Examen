#include <stdio.h>

int main() 
{
    int n;
    printf("A partir de qué número quieres que se impriman 10 numeros: \n");
    scanf("%d", &n);

    printf("Los diez numeros son:\n");
    int i = 0;
    while (i < 10) 
	{
    printf("%d ", n + 1 + i);
    i++;
    }

    return 0;
}

