#include "IntArrays.h"
#include <stdio.h>
#include <math.h>
void swap(int[],int,int);
// implementación de funciones
void printArray(int array[],int size)//paso por referencia, lo que se envía a la función es un puntero.
{
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf(",%d", array[i]);
        }
        
    }
    printf("\n");
}

int Min(int array[], int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

float average(int array[], int size)
{
    float acumulador = 0;
    float total;
    for (int i = 0; i < size; i++)
    {
        acumulador += array[i];
    }
    total = acumulador/size;
    return total;
}
double estDev(int array[], int size)
{
    float prom;
    double d;
    double acum = 0;
    prom = average(array, size);
    for (int i = 0; i < size; i++)
    {
        d = array[i] - prom;
        d = pow(d,2);
        acum += d;
    }
    acum /= size;
    acum = sqrt(acum);
    return acum;
} 
void inverse(int array[], int size)
{
    int j=0;
    int var;
    for (int i = size-1; i > size/2; i--, j++)
    {
        var = array[j];
        array[j] = array[i];
        array[i] = var;
    }
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf(",%d", array[i]);
        }
        
    }
    printf("\n");
    
}

void selectionSort(int array[],int size)
{
    int start,pos_min;
    for (start = 0; start < size-1; start++)
    {
        for (int i = pos_min=start; i < size; i++)
        {
            if (array[i]<array[pos_min])
            {
                pos_min = i;
            }
        }
        // hasta aquí ya tenemos el menor
        swap(array,start,pos_min);
    }
    
}

void swap(int array[],int start,int pos_min)
{
    int t;
    t = array[pos_min];
    array[pos_min] = array[start];
    array[start] = t;
}
enum boolean isSorted(int array[], int size)
{
    enum boolean sorted = false;
    for (int i = 0; i <size-1; i++)
    {
        if (array[i]<array[i+1])
        {
            sorted = true;
            break;
        }  
    }
    return sorted;
}