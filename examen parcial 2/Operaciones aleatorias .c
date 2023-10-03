#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, x, y, z;
    float j;
    srand(time(NULL));

    do {
        n = rand()%(5+1-1)+1; 
        if (n == 1) // suma
		{ 
            x = rand() % 10;
            y = rand() % 10;
            z = x + y;
            printf("%d + %d = %d\n", x, y, z);
        } else if (n == 2) // resta
		{ 
            x = rand() % 10;
            y = rand() % 10;
            z = x - y;
            printf("%d - %d = %d\n", x, y, z);
        } 
		else if (n == 3) // multiplicación
		{ 
            x = rand() % 10;
            y = rand() % 10;
            z = x * y;
            printf("%d * %d = %d\n", x, y, z);
        } 
		else if (n == 4) // división
		{ 
            x = rand() % 10;
            y = rand() % 9 + 1; 
            j = (float)x / y;
            printf("%d / %d = %.2f\n", x, y, j);
        } 
		else if (n == 5) // terminar el programa
		{ 
            printf("\033[1mEl programa termino.\n\033[0m");
        }
    } while (n != 5);

    return 0;
}
