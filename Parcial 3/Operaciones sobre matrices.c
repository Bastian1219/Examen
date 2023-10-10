#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, j, k, z;
	
    
    do {
		printf("Que operacion quiere realizar?\n");
   	 	printf("1. Resta de matrices\n");
    	printf("2. Suma de matrices\n");
    	printf("3. Multiplicacion de matrices\n");
    	printf("4. Diagonal\n");
    	printf("5. Suma del triángulo superior\n");
    	printf("6. Terminar\n");
        scanf("%d", &z);

        if (z == 1) // Resta de matrices
		{ 
            int n, i, j;
            srand(time(NULL));
            printf("Ingrese la longitud de la matriz: ");
            scanf("%d", &n);
            int A[n][n], B[n][n], C[n][n];

            printf("Matriz A:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    A[i][j] = rand() % (9 + 1 - 1) + 1;
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }

            printf("Matriz B:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    B[i][j] = rand() % (9 + 1 - 1) + 1;
                    printf("%d ", B[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    C[i][j] = A[i][j] - B[i][j];
                }
            }

            printf("\nResultado de la resta de matrices:\n");
            for (i = 0; i < n; i++)
			{
                for (j = 0; j < n; j++) 
				{
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        } 
		else if (z == 2) // Suma de matrices
		{ 
            int n, i, j;
            srand(time(NULL));
            printf("Ingrese la longitud de la matriz: ");
            scanf("%d", &n);
            int A[n][n], B[n][n], C[n][n];

            printf("Matriz A:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    A[i][j] = rand() % (9 + 1 - 1) + 1;
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }

            printf("Matriz B:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    B[i][j] = rand() % (9 + 1 - 1) + 1;
                    printf("%d ", B[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    C[i][j] = A[i][j] + B[i][j];
                }
            }

            printf("\nResultado de la suma de matrices:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        } else if (z == 3) { // Multiplicación de matrices
            srand(time(NULL));
            printf("Ingrese la longitud de las matrices: ");
            scanf("%d", &n);
            int A[n][n], B[n][n], C[n][n];

            printf("Matriz A:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    A[i][j] = rand() % (9+1-1)+1;
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }

            printf("Matriz B:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    B[i][j] = rand() % (9+1-1)+1;
                    printf("%d ", B[i][j]);
                }
                printf("\n");
            }

            printf("Multiplicacion de las matrices:\n");
            for (i = 0; i < n; i++) 
			{
                for (j = 0; j < n; j++) 
				{
                    int temporal = 0;
                    for (k = 0; k < n; k++) {
                        temporal += A[i][k] * B[k][j];
                    }
                    C[i][j] = temporal;
                    printf("%d ", C[i][j]);
                }
                printf("\n");
            }
        } 
		else if (z == 4) // Diagonal
		{ 
            int n,i,j,suma=0;
			srand(time(NULL));
			printf("ingrese la longitud de la matriz:\n");
			scanf("%d", &n);
			int A[n][n];
			printf("Matriz A:\n");
			for (i=0; i<n; i++) 
			{
				for (j=0; j<n; j++)
				{
					A[i][j]=rand() % (9 + 1 - 1) + 1;
					printf("%d ",A[i][j]);
					if (i==j)
					{
						suma+=A[i][j];	
					}
				}
				printf("\n");
			}
			printf("La suma de la digonal principal es: %d",suma);
			printf("\n");
        } 
		else if (z == 5) // Suma del triángulo superior 
		{ 
    		int n, i, j;
    		srand(time(NULL));
   		 	printf("Ingrese la longitud de la matriz: ");
    		scanf("%d", &n);
    		int A[n][n];

   			printf("Matriz A:\n");
    		for (i = 0; i < n; i++) 
			{
        		for (j = 0; j < n; j++) 
				{
            		A[i][j] = rand() % (9 + 1 - 1) + 1;
            		printf("%d ", A[i][j]);
        		}
        		printf("\n");
    		}

    		int suma = 0;
    		for (i = 0; i < n; i++) 
			{
        		for (j = i + 1; j < n; j++) 
				{ 
            		suma += A[i][j];
        		}
    		}

    		printf("Suma del triangulo superior: %d\n", suma);
		}
		else if (z == 6) 
		{
            printf("El programa termino.\n");
        } 
		
    } while (z != 6);

    return 0;
}



