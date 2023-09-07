#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Ingrese un numero: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, ingrese un numero positivo.\n");
    } else {
        while (i <= n) {
            s += i;
            i++;
        }
        printf("La suma de los numeros anteriores a %d es:\n%d\n", n, s);
    }

    return 0;
}


