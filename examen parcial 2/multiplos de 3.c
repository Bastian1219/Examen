#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("\033[1mEste programa te dira que numeros son multiplos de 3 del 1 al 100\n\033[0m");
    for (n = 1; n <= 100; n++) {
        if (n % 3 == 0)
		{
            printf("%d: es multiplo de 3\n", n);
        }
        if (n % 3 != 0) 
		{
            printf("%d: no es multiplo de 3\n", n);
        }
    }
    return 0;
}
