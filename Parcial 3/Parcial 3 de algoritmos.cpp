#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contarMails(char *NombreArchivoEnt)
{
	FILE *pa = fopen(NombreArchivoEnt,"r");
	if(pa==NULL)
	{
		printf("problema al abrir el archivo %S. Termina el programa.\n",NombreArchivoEnt);
		exit(-1);
	}
	int n=0;
	char c= fgetc(pa);
	while(!feof(pa))
	{
		if(c=='\n')n++;
		c= fgetc(pa);	
	}
	fclose(pa);
	return n-1;
}

int main()
{
	char NombreArchivoEnt[] = "emails.csv";
	char Salida[]= "plantillaProcesada.txt";
	int n = contarMails(NombreArchivoEnt);
	printf("La cantidad de Mails son: %d\n", n);
	
	FILE *pEnt = fopen(NombreArchivoEnt, "r");
	if(pEnt==NULL)
	{
		printf("problema al abrir el archivo %S. Termina el programa.\n",NombreArchivoEnt);
		exit(-1);
	}
}
