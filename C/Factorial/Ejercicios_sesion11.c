#include <stdio.h>

int main (void)
{
    // Pares menores que M.
    int M;
    printf("Escribe un numero: ");
    scanf("%d", &M);

    for ( int i = 0; i < M; i +=2)
    {
        printf("%d\n", i);
    }

    // Impares menores que M.
    printf("Escribe un numero: ");
    scanf("%d", &M);

    for (int i = 1; i < M; i++)
    {
        if (i&1)
        {
            printf("%d\n", i);
        }
        
    } 

    // Los Primero N pares.
    int N, contador=0;
    printf("Escribe un numero: ");
    scanf("%d", &N);
    while (N>0)
    {
        printf("%d\n", contador);
        contador += 2;
        N --;
    } 

    // Todos los múltiplos de 3 en el rango de 12 a M.
    printf("Escribe un numero: ");
    scanf("%d", &M);
    for (int i = 12; i <= M; i +=3)
    {
        printf("%d\n",i);
    }
     

    // Los N primeros múltiplos de 7 mayores de 30.
     printf("Escribe un numero: ");
    scanf("%d", &N);
    contador=35;
    while (N>0)
    {
        printf("%d\n", contador);
        contador += 7;
        N --;
    }
     

    // Los N primeros múltiplos de 5 menores que 100.
     printf("Escribe un numero: ");
    scanf("%d", &N);
    contador=95;
    while (N>0)
    {
        printf("%d\n", contador);
        contador -= 5;
        N --;
    } 

    // Tablas de multiplicar con for.
    for ( int x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= 10 ; y++)
        {
            printf("%d x %d = %d\n", x, y, (x*y));
        }
        
    }   
    

    // Tabla de código ASCII.
    int c;
    printf("Caracteres de la A a la Z y su codigo numerico\nCodigo Simbolo\n");
    for (int k = 0; k <= 20; k++)
    {
        for (int i = 0; i < 7; i++)
        {
            c=k+(21*i);
            if ((c>=7)&&(c<=10))
            {
                printf("%d  \t",c);
            }
            else if (c<=127)
            {
                printf("%d %c\t",c,c);
            }
        }
        printf("\n");
    } 

    // Conteo binario explicito
    int pos1=0;
    int pos2=0;
    int pos3=0;
    for (pos1 = 0; pos1 <=1; pos1++)
    {
        for (pos2 = 0; pos2 <=1; pos2++)
        {
            for ( pos3 = 0; pos3 <= 1; pos3++)
            {
                printf("%d%d%d\n",pos1,pos2,pos3);
            }
            
        }
        
    }
    

return 0;
}