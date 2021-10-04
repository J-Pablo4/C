#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // paso 1, inicialización
    int counter = 1;
    // paso 3, condición
    while (counter <= 100)
    {
        printf("%d - ", counter);
        // incremento o decremento
        counter ++; //contador = contador + 1
    }
    system("PAUSE");
    // contador del 100 al 1
    counter = 100;
    while (counter >= 1)
    {
        printf("%d - ", counter);
        counter --;
    }
    system("PAUSE");
    return 0;
}