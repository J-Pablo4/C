#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int M;
    int N;
    int contador = 0;
    // Pares
    printf("Dame un numero: ");
    scanf("%d",&M);
    
    while (M>contador)
    {
        printf("\n%d", contador);
        contador += 2;
    }
    printf("\n");
    system ("PAUSE");
    // Impares
    contador = 0;
    printf("Dame un numero: ");
    scanf("%d",&M);
    while (M>contador)
    {
        if (contador&1)
        {
            printf("\n%d", contador);
        }
        contador ++;
    }
    printf("\n");
    system ("PAUSE"); 
    // Primeros N pares
    contador = 0;
    printf("Dame un numero: ");
    scanf("%d",&N);
    while (N>0)
    {
        printf("%d\n", contador);
        contador += 2;
        N --;
    }
    printf("\n");
    system ("PAUSE");
    // Múltiplos de 3
    contador = 12;
    printf("Dame un numero: ");
    scanf("%d",&M);
    while (12<=contador && contador<=M)
    {
        printf("%d\n", contador);
        contador += 3;
    }
    printf("\n");
    system ("PAUSE"); 
    //N primeros múltiplos de 7 mayores de 30
    contador = 35;
    printf("Dame un numero: ");
    scanf("%d",&N);
    while (N>0)
    {
        printf("%d\n", contador);
        contador += 7;
        N --;
    }
    printf("\n");
    system ("PAUSE"); 
    return 0;
}