#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxColumnas 3100
#define FILAS_A_PROCESAR 51
#define BUFFER_SIZE 1024*1024 

int main() {
    const char *nombre_archivo_csv = "emails.csv";
    FILE *archivo_csv = fopen(nombre_archivo_csv, "r");
    if (!archivo_csv) 
	{
        perror("Error al abrir el archivo CSV");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    int Palabras[MaxColumnas] = {0};
    char *nombres[MaxColumnas];
    int FilaInicial = 289; 
    int columna = -1;

    if (fgets(buffer, sizeof(buffer), archivo_csv) != NULL) 
	{
        char *token = strtok(buffer, ",");
        int indice = 0;
        while (token && indice < MaxColumnas) 
		{
            if (strcmp(token, "Email No.") == 0) 
			{
                columna = indice;
            } 
            
			else 
			{
                nombres[indice] = strdup(token);
            }
            token = strtok(NULL, ",");
            indice++;
        }
    } 

	else 
	{
        fclose(archivo_csv);
        return 1;
    }

    for (int i = 0; i < FilaInicial; ++i) 
	{
        if (fgets(buffer, sizeof(buffer), archivo_csv) == NULL) 
		{
            fclose(archivo_csv);
            return 1;
        }
    }

    for (int i = 0; i < FILAS_A_PROCESAR; ++i) 
	{
        if (fgets(buffer, sizeof(buffer), archivo_csv) == NULL) 
		{
            break;  
        }
        
        char *token = strtok(buffer, ",");
        int indice_columna = 0;
        
        while (token && indice_columna < MaxColumnas) 
		{
            if (indice_columna != columna) 
			{
                long val = strtol(token, NULL, 10);
                if (val != 0 || (val == 0 && token[0] == '0')) 
				{ 
                    Palabras[indice_columna] += val;
                }
            }
            token = strtok(NULL, ",");
            indice_columna++;
        }
    }

    fclose(archivo_csv);

    FILE *archivo_salida = fopen("180290.txt", "w");
    if (!archivo_salida) 
	{
        perror("Error al abrir el archivo de salida");
        return 1;
    }

    for (int i = 0; i < MaxColumnas; i++) 
	{
        if (i != columna && nombres[i] != NULL) 
		{
            fprintf(archivo_salida, "%s, %d\n", nombres[i], Palabras[i]);
            free(nombres[i]); 
        }
    }

    fclose(archivo_salida);
    printf("Los conteos de palabras han sido escritos en 180290.txt\n");

    return 0;
}
