#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 0

int main (void)
{
    // coparar si un número está dentro de un rango.
    int n;
    printf("Dame un valor: ");
    scanf("%d",&n);

    /* if (n<=MAX && n>=MIN)
    {
        printf("\nEsta en el rango\n");
        system("PAUSE");
    }
    else
    {
        printf("\nEsta fuera del rango\n");
        system("PAUSE");
    }
 */
    // Verificar nulo, par o impar.
    /* if (n==0)
    {
        printf("\nEl numero es nulo");
    }
    else if (n&1)
    {
        printf("\nEl numero es impar");
    }
    else 
    {
        printf("\nEl numero es par");
    }
     */
    /* if (n==1)
    {
        printf("Enero");
    }
    else if (n ==2)
    {
        printf("Febrero");
    }
    else if (n==3)
    {
        printf("Marzo");
    } */
    // validación
/*     while (n<1 || n>12)
    {
        printf("El numero esta fuera de rango. ");
        printf("Escriba un numero entre 1 y 12:");
        scanf("%d",&n);
    }

    // pasar al switch
    switch (n)
    {
    case 1:
        printf("Enero\n");
        break;
    case 2:
        printf("Febrero\n");
        break;
    case 3:
        printf("Marzo\n");
        break;
    case 12:
        printf("Diciembre\n");
     default:
        break; 
    } */
    while (n!=0)
    {
        if (n&1)
        {
            printf("El numero es impar\n");
        }
        else if (n&~1)
        {
            printf("El numero es par\n");
        }
        printf("Dame un numero: ");
        scanf("%d",&n);
    }
    
    
    return 0;
}
