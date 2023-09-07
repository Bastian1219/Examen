#include <stdio.h>

int main() 
{
    int n;
    printf("\033[1mSi no ingresa un numero positivo el programa se apaga\033[0m\n");
    while (n >= 0)  
	{
    printf("introduce un numero\n");
    scanf("%d", &n);
    
    	if( n < 0)
		{
			printf("se acabo el programa\n");
    	}
    
    }

    return 0;
}
