#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMaximo(int b[], int l);
int findMenor(int b[], int l);
void quicksort(int lista[], int primero, int ultimo);

int main() {
    int n, i , moda;
    float media, mediana;
    srand(time(NULL));
    printf("numero de elementos a ordenar \n");
    scanf("%d", &n);

    int lista[n];
    for (i = 0; i < n; i++) {
        lista[i] = rand() % (30 + 1 - 1) + 1; 
        printf(" %d ", lista[i]);
    }
    
	
   	 	
    printf(" \n ");
    quicksort(lista, 0, n - 1);

    printf("lista ordenada\n");
    for (i = 0; i < n; i++) {
        printf(" %d ", lista[i]);
    }

    int maxIndex = findMaximo(lista, n);
    int minIndex = findMenor(lista, n);
    
    printf("\n\nValor maximo: %d\n", lista[maxIndex]);
    printf("Valor minimo: %d\n", lista[minIndex]);
    
    if (n % 2 == 0) 
	{
        mediana = (lista[n / 2 - 1] + lista[n / 2]) / 2.0;
    } 
	else 
	{
     	mediana = lista[n / 2];
   	}
    printf("Mediana: %.2f\n", mediana);
    
	float sumatoria = 0;
    for (i = 0; i < n; i++) 
	{
        sumatoria += lista[i];
    }
    media = sumatoria / n; 
    printf("Media: %.2f\n", media);
    	
	moda = lista[0];
    int maxCount = 0;
    for (int i = 0; i < n; i++) 
	{
        int count = 1;
        for (int j = i + 1; j < n; j++) 
		{
            if (lista[i] == lista[j]) 
			{
                count++;
            }
        }
        if (count > maxCount) 
		{
            moda = lista[i];
            maxCount = count;
        }
    }
    printf("moda: %d\n", moda);
    
    int frequencia[31] = {0}; 
    for (i = 0; i < n; i++) 
	{
        frequencia[lista[i]]++;
    }

    printf("Histograma:\n");
    
    return 0;
}


void quicksort(int lista[], int primero, int ultimo)
{
	int pivot, i, j, temp;
	if(primero < ultimo)
	{
		pivot = primero;
		i = primero;
		j = ultimo;
		while(i < j)
		{
			while(lista[i] <= lista[pivot] && i <= ultimo){i++;}
			while(lista[j] > lista[pivot] && j >= primero){j--;}
			if(i < j)
			{
				temp = lista[i];
				lista[i] = lista[j];
				lista[j] = temp;
			}
		}
		temp = lista[j];
		lista[j] = lista[pivot];
		lista[pivot] = temp;
		quicksort(lista, primero, j-1);
		quicksort(lista, j+1, ultimo);
	}
}

int findMaximo(int b[], int l)
{
    int a = -100000;
    int index = -1;

    for (int i = 0; i < l; i++)
    {
        if (b[i] > a)
        {
            a = b[i];
            index = i;
        }
    }
    return index;
}

int findMenor(int b[], int l)
{
    int a = 100000;
    int index = -1;

    for (int i = 0; i < l; i++)
    {
        if (b[i] < a)
        {
            a = b[i];
            index = i;
        }
    }
    return index;
}

