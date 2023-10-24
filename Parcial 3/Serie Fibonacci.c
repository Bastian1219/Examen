#include <stdio.h>

long long SerieFibonacci(int num);

int main() 
{
    long long num, sum;
    printf("Numero de elementos en la serie Fibonacci: ");
    scanf("%lld", &num);
    printf("Elementos de la serie: \n");
    for(sum = 0; sum <= num; sum++) 
	{
        printf("%lld ", SerieFibonacci(sum));
    }
    return 0;
}

long long SerieFibonacci(int num) 
{
    if (num <= 1) 
	{
        return num;
    } 
	else 
	{
        return SerieFibonacci(num - 1) + SerieFibonacci(num - 2);
    }
}

