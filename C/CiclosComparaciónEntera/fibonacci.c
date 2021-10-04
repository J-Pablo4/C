#include <stdio.h>

int main(void)
{
    int num_1 = 1;
    int num_2 = 1;
    int num_0 = 0;
    int bandera = 1;
    int num_usuario1;
    int num_usuario2;
    printf("Escribe un numero: ");
    scanf("%d", &num_usuario1);
    printf("\n");
    printf("Escribe otro numero: ");
    scanf("%d", &num_usuario2);
    do
    {
        num_0 = num_1;
        num_1 = num_2;
        num_2 = num_0 + num_1;
        if (num_usuario1 == num_0 && num_usuario2 == num_1)
        {
            printf("Es un par de fibonacci.");
            bandera = 0;
            break;
        }
        else if (num_usuario1 < num_0 || num_usuario2 < num_1)
        {
            break;
        }
        
    } while (num_usuario1 <= num_usuario2);
    if (bandera)
    {
        printf("No es un par de fibonacci.");
    }
    return 0;
}