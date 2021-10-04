#include <stdio.h>
#include <stdlib.h>
#include "IntArrays.h"

int main ()
{
    int array[] = {3,5,1,9,12,76};
    float p;
    double ed;
    int min;
    printf("Memory size: %d\n", sizeof(array));
    printf("Elements: %d\n", sizeof(array)/sizeof(int));

    printf("Arreglo: ");
    printArray(array,6);

    selectionSort(array,6);

    printArray(array,6);
    if (isSorted(array,6))
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is unsorted\n");
    }

    /* printf("Arreglo Invertido: ");
    inverse(array, 6);
    p = average(array, 6);
    ed = estDev(array,6);
    min = Min(array,6); */
 /* 
     printArray(array,2);
    printArray(array,10);//IMPRESIÓN DE SALIDA 3,5,1,9,12,76
    printf("MIN: %d\n", min);
    printf("AVERAGE: %f\n", p);
    printf("STANDARD DEVIATION: %f\n", ed); */
    system("PAUSE");
    return 0;
}

