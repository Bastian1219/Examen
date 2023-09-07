#include <stdio.h>

int main() {
    int n, s = 0, digito;

    printf("Ingresa un numero:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("\033[1mEl programa no acepta numeros negativos, por favor escribe un numero positivo\n\033[0m");
    }

    while (n > 0) {
        digito = n % 10; 
        s += digito; 
        n /= 10; 
    }

    printf("La suma de los digitos es:\n");
	printf("%d\n", s);

    return 0;
}
