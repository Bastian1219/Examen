#include <stdio.h>

int main() {
	
    printf("De cuantos pisos quieres el arbol?\n");
    int n, i = 1;
    scanf("%d", &n);

    while (i <= n) {
        int j = 0; 
        while (j < n - i) {
            printf(" ");
            j++;
        }

        int k = 0; 
        while (k < 2 * i - 1) {
            printf("*");
            k++;
        }

        printf("\n");
        i++; 
    }
    printf("\n");
    i = 1;
    while (i >= 1) {
        int j = 0; 
        while (j < n - i) {
            printf(" ");
            j++;
        }

        int k = 0; 
        while (k < 2 * i - 1) {
            printf("*");
            k++;
        }

        printf("\n");
        i--;
    }

    return 0;
}

