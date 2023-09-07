#include<stdio.h>

int main(){
	int n, i = 1;
	printf("\033[1mEste programa solo te imprimira los numeros impares\033[0m\n");
	printf("ingresa hasta que numero quieres que te imprima los impares:");
	scanf("%d",&n);
	
	while (i <= n) {
        printf("%d\n", i);
        i += 2;
    }
    
    return 0;
}
	
