#include <stdio.h>
#include <string.h>
#define BUFFER 50 // tamaño máximo posible (incluye espacio para NULL) de cada cadena de la matriz
#define COUNT 10 //número de cadenas en la matriz

void printArrays(char [][BUFFER],int);
void selectionSort(char [][BUFFER],int);
int main()
{
    // declaración de variables
    char szArrays[COUNT][BUFFER];
    char szArrays2[][BUFFER] = {"Hello","My","Friends"};
    printf("Size of szArrays: %d\n", sizeof(szArrays));
    printf("Size of szArrays: %d\n", sizeof(szArrays2));
    printArrays(szArrays2,3);
    return 0;
}
void printArrays(char szArrays[][BUFFER],int nStrings)
{
    for (int i = 0; i < nStrings; i++)
    {
        //opción 1, recorrer elemento por elemento e imprimirlo
        /* for (int j = 0; szArrays[i][j] != '\0'; j++)
        {
            printf("%c",szArrays[i][j]);
        } */
        /* puts(szArrays[i]); */
        // opción 3, usar printf
        printf("%s\n",szArrays[i]);
    }   
}